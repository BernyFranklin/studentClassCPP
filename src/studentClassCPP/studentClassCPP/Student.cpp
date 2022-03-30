//
//  Student.cpp
//  studentClassCPP
//
//  Created by Frank bernal on 3/30/22.
//

// Used for declarations
#include "Student.h"
// Used for isalpha (test for char)
#include <cctype>
// Used for input output
#include <stdio.h>

using namespace std;

// Default student constructor
Student::Student() {
    name = "";      // Empty string
    IdNumber = 0;   // Initialized to zero
    gpa = 0.0;      // Initialized to zero
}   // End of default

// Fully qualified constructor
Student::Student(string n, int id, double g) {
    setName(n);        // Use setName to validate data
    setIdNumber(id);   // Use setIdNumber to validate data
    setGpa(g);         // Use setGpa to validate data
}   // End of fully qualified

// Mutators and Accessors

// Start setName
void Student::setName(string n) {
    if (isupper(n[0]))   // First char of name must be A-Z
        name = n;
    else
        name = "--Bad name Entered";
}   // End of setName

// Start getName
string Student::getName() { return name; }
// End getName

// Start setIdNumber
void Student::setIdNumber(int id) {
    if (id > 1 && id < 100000)   // Must be from 0 to 100000
        IdNumber = id;
    else
        IdNumber = 0;            // Indicate illegal selection
}   // End of setIdNumber

// Start getIdNumber
int Student::getIdNumber() { return IdNumber; }
// End getIdNumber

// Start setGpa
void Student::setGpa(double g) {
    if (g >= 0.0 && g <= 4.0)   // gpa must be between 0.0 and 4.0
        gpa =g;
    else
        gpa = 0;
}   // End setGpga

// Start for getGpa
double Student::getGpa() { return gpa; }
// End getGpa
