# Student Database Project – Part 1

## Overview
This week I started building the foundation for a student‑database system. The main goal was to break the data into separate classes so each part of the student information is handled by the class it actually belongs to. For Part 1, I focused on getting the `Address` and `Date` classes fully working and tested through the provided `main.cpp`. The `Student` class will be added next week.

## Data Normalization
To keep the project organized and easier to maintain, it is separated into three classes:

- **Address**  
  Stores street, city, state, and ZIP code.  

- **Date**  
  Stores month, day, and year as integers.  
  The date comes in as a string (mm/dd/yyyy).

- **Student**  
  Will be added in Part 2.  

This structure keeps each class focused on one job.

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