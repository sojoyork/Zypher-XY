#include "zypherxy.hpp"
#include <iostream>
#include <sstream>
#include <random>
#include <iomanip>

// Constructor
ZypherXY::ZypherXY() {}

// Destructor
ZypherXY::~ZypherXY() {}

std::string ZypherXY::hashText(const std::string &text) {
    // Step 1: Concatenate the text with itself
    std::string result = text + text;
    
    // Step 2: Add salt and perform XOR
    result = addSalt(result);
    result = xorOperation(result);
    
    // Step 3: Add more salt and repeat XOR
    result = addSalt(result);
    result = xorOperation(result);
    
    // Final hash result as a 64-bit string (hex)
    return result;
}

std::string ZypherXY::addSalt(const std::string &text) {
    // Generate random salt and append to the text
    std::random_device rd;
    std::uniform_int_distribution<int> dist(0, 255);
    std::string salted = text;
    
    // Add 16 bytes of random salt
    for (int i = 0; i < 16; i++) {
        salted += static_cast<char>(dist(rd));
    }
    
    return salted;
}

std::string ZypherXY::xorOperation(const std::string &text) {
    uint64_t result = 0;
    // XOR all characters in the text
    for (char c : text) {
        result ^= static_cast<uint64_t>(c);
    }
    
    // Convert the result into a hexadecimal string representation
    return toHex(result);
}

std::string ZypherXY::toHex(uint64_t val) {
    std::stringstream stream;
    stream << std::setfill('0') << std::setw(16) << std::hex << val;
    return stream.str();
}
