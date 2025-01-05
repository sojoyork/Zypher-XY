#ifndef ZYPHERXY_HPP
#define ZYPHERXY_HPP

#include <string>

class ZypherXY {
public:
    ZypherXY();
    ~ZypherXY();

    std::string hashText(const std::string &text);

private:
    std::string addSalt(const std::string &text);
    std::string xorOperation(const std::string &text);
    std::string performHashing(const std::string &text);
    uint64_t xorBits(uint64_t val1, uint64_t val2);
    std::string toHex(uint64_t val);
    uint64_t fromHex(const std::string &hex);
};

#endif                                                                                                                                        
