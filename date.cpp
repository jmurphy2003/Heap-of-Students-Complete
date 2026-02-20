#include <iostream>
#include <string>
#include "date.h"

Date::Date() {
    month = 0;
    day = 0;
    year = 0;
}

Date::Date(std::string dateString) {
    init(dateString);
}

void Date::init(std::string dateString) {
    size_t firstSlash = dateString.find('/');
    size_t secondSlash = dateString.find('/', firstSlash + 1);

    month = std::stoi(dateString.substr(0, firstSlash));
    day = std::stoi(dateString.substr(firstSlash + 1, secondSlash - firstSlash - 1));
    year = std::stoi(dateString.substr(secondSlash + 1));
}

std::string Date::getMonthName() const {
    std::string months[] = {
        "January","February","March","April","May","June",
        "July","August","September","October","November","December"
    };

    if (month >= 1 && month <= 12)
        return months[month - 1];

    return "Invalid";
}

void Date::printDate() const {
    std::cout << getMonthName() << " "
              << day << ", "
              << year << std::endl;
}