#include "zypherxy-xzorrio.hpp"

// Constructor
ZypherXYXzorrio::ZypherXYXzorrio() {}

// Destructor
ZypherXYXzorrio::~ZypherXYXzorrio() {}

std::string ZypherXYXzorrio::xZorrio(const std::string &text) {
    std::string result = hashText(text); // Start with the standard Zypher-XY hash

    // Repeat the hashing process 5 times in X-ZORRIO mode
    for (int i = 0; i < 5; i++) {
        result = hashText(result);
    }
    
    return result;
}
