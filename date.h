#ifndef DATE_H
#define DATE_H

#include <string>

class Date {
private:
    int month;
    int day;
    int year;

    std::string getMonthName() const;

public:
    Date();
    Date(std::string dateString);

    void init(std::string dateString);
    void printDate() const;
};

#endif