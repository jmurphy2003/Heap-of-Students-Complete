# Student Database Project – Part 2

## Overview
The program now reads from students.csv, creates a vector of Student*
    objects, and provides a menu so the user can:

        1) Print all student names
        2) Print full student data
        3) Search for a student by last name
        0) Quit

    All objects (Address, Date, Student) are created on the heap, and the
    program deletes everything before exiting to avoid memory leaks.
## Data Normalization
The project uses three classes, each responsible for its own data:

    Address:
        - street
        - city
        - state
        - zip
        - printAddress()

    Date:
        - month, day, year
        - init(string mm/dd/yyyy)
        - printDate() with month name

    Student:
        - firstName, lastName, creditHours
        - Address* addr
        - Date* dob
        - Date* gradDate
        - init(string line)
        - print() and printName()

    This keeps each class focused on one job and makes the program easier
    to maintain and expand.

## Algorithms

### date::init
1. Find the first slash in the date string  
2. Find the second slash  
3. Extract the month substring and convert it to an integer  
4. Extract the day substring and convert it to an integer  
5. Extract the year substring and convert it to an integer  

### address::printAddress
1. Print the street  
2. Print: `city + " " + state + ", " + zip`  

    - Address class: complete
    - Date class: complete
    - Student class: complete
    - CSV loading: working
    - Menu system: working
    - Search feature: working
    - Memory cleanup: implemented