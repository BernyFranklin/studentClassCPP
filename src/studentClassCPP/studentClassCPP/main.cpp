/*
 * studentClassCPP Version#1.0
 * Frank Bernal
 * CIS 054
 * Input
 * Output
 * 30 Mar 2022
 */

#include <iostream>

// Include the header file we made
#include "Student.h"
using namespace std;

// Define an array of students
Student CIS054[] = {
    Student ("Joe Williams", 44536, 3.4),
    Student ("Sally Washington", 55458, 3.7),
    Student ("Fred MacIntosh", 66587, 2.9),
    Student ("Jose De La Cruz", 67892, 4.0),
    Student ("777 Dan McElroy", 77777, 4.0),
    Student ("Thinh Nguyen", 73657, 3.6)
};   // End of array

// Start Main
int main(int argc, const char * argv[]) {
    // Get how many students in array
    int numberOfStudents = sizeof(CIS054)/sizeof(Student);
    
    // Display the header line
    
    // List of all the students in the course
    for (int i = 0; i < numberOfStudents; i++) {
        cout << "  " << CIS054[i].getIdNumber() << "  " << CIS054[i].getName() << endl;
    }   // End of loop
    
    cout << endl;   // Blank line between students names and grades
    
    // Compute average gpa of all students
    double total = 0;
    for (int i = 0; i < numberOfStudents; i++)
        total += CIS054[i].getGpa();   // Add all gpas together
    
    double average = total / numberOfStudents;    // Divide total by number of students
    
    // Print massage
    cout << "  " << "The Average GPA of all the students is " << average << endl << endl;
    
    
        

    
    return 0;
}
