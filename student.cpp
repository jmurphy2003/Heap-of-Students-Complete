#include "student.h"
#include <iostream>
#include <sstream>
#include <vector>
#include <cctype>

using namespace std;

Student::Student() {
    firstName = "";
    lastName = "";
    creditHours = 0;

    addr = nullptr;
    dob = nullptr;
    gradDate = nullptr;
}

Student::Student(string line) {
    addr = nullptr;
    dob = nullptr;
    gradDate = nullptr;
    init(line);
}

Student::~Student() {
    delete addr;
    delete dob;
    delete gradDate;
}

void Student::init(string line) {

    stringstream ss(line);
    vector<string> tokens;
    string temp;

    while (ss >> temp) {
        tokens.push_back(temp);
    }

    firstName = tokens[0];
    lastName = tokens[1];

    string dobStr = tokens[tokens.size() - 3];
    string gradStr = tokens[tokens.size() - 2];
    creditHours = stoi(tokens[tokens.size() - 1]);

    int stateIndex = -1;
    for (int i = 2; i < tokens.size(); i++) {
        if (tokens[i].size() == 2 && isalpha(tokens[i][0]) && isalpha(tokens[i][1])) {
            stateIndex = i;
            break;
        }
    }

    string state = tokens[stateIndex];
    string zip = tokens[stateIndex + 1];

    int cityStart = stateIndex - 1;

    while (cityStart > 2 && !isdigit(tokens[cityStart - 1][0])) {
        cityStart--;
    }

    string street = "";
    for (int i = 2; i < cityStart; i++) {
        street += tokens[i] + " ";
    }
    street = street.substr(0, street.size() - 1);

    string city = "";
    for (int i = cityStart; i < stateIndex; i++) {
        city += tokens[i] + " ";
    }
    city = city.substr(0, city.size() - 1);

    addr = new Address();
    addr->init(street, city, state, zip);

    dob = new Date(dobStr);
    gradDate = new Date(gradStr);
}

void Student::print() {

    cout << firstName << " " << lastName << endl;

    addr->printAddress();

    cout << "DOB: ";
    dob->printDate();
    cout << endl;

    cout << "Grad: ";
    gradDate->printDate();
    cout << endl;

    cout << "Credits: " << creditHours << endl;
}

void Student::printName() {
    cout << lastName << ", " << firstName << endl;
}

string Student::getLastName() {
    return lastName;
}

string Student::getFirstName() {
    return firstName;
}

int Student::getCredits() {
    return creditHours;
}
