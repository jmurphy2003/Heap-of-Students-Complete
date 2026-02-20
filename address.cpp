#include <iostream>
#include "address.h"

Address::Address() {
    street = "";
    city = "";
    state = "";
    zip = "";
}

Address::Address(std::string st, std::string c, std::string s, std::string z) {
    init(st, c, s, z);
}

void Address::init(std::string st, std::string c, std::string s, std::string z) {
    street = st;
    city = c;
    state = s;
    zip = z;
}

void Address::printAddress() const {
    std::cout << street << std::endl;
    std::cout << city << " " << state << ", " << zip << std::endl;
}