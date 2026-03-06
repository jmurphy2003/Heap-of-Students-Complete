#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "address.h"
#include "date.h"

class Student {

private:
    std::string firstName;
    std::string lastName;
    int creditHours;

    Address* addr;
    Date* dob;
    Date* gradDate;

public:
    Student();
    Student(std::string line);
    ~Student();

    void init(std::string line);

    void print();
    void printName();

    std::string getLastName();
    std::string getFirstName();
    int getCredits();
};

#endif
