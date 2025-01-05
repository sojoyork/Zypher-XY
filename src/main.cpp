#include <iostream>
#include "zypherxy.hpp"
#include "zypherxy-xzorrio.hpp"

int main() {
    ZypherXY zypher;
    ZypherXYXzorrio xzorrio;

    std::string text = "Test data for hashing!";

    // Regular Zypher-XY hashing
    std::string regularHash = zypher.hashText(text);
    std::cout << "Zypher-XY Hash: " << regularHash << std::endl;

    // Zypher-XY with X-ZORRIO mode
    std::string xzorrioHash = xzorrio.xZorrio(text);
    std::cout << "Zypher-XY X-ZORRIO Hash: " << xzorrioHash << std::endl;

    return 0;
}
