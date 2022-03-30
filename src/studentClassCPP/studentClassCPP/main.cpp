/*
 * studentClassCPP Version#1.0
 * Frank Bernal
 * CIS 054
 * Input
 * Output: Display Student ID, Name, Major, Gpa, and GPA average for class
 * 30 Mar 2022
 */

#include <iostream>
// Used for setw
#include <iomanip>
// Include the header file we made
#include "Student.h"
using namespace std;

// Define an array of students
Student CIS054[] = {
    Student ("Joe Williams", 44536, "Nutrition", 3.4),
    Student ("Sally Washington", 55458, "Accounting", 5.0),
    Student ("Fred MacIntosh", 66587, "Computer Science", 2.9),
    Student ("Jose De La Cruz", 67892, "Marketing", 4.0),
    Student ("777 Dan McElroy", 77777, "Business Management", 4.0),
    Student ("Thinh Nguyen", 736570, "Computer Science", 3.6)
};   // End of array

// Start Main
int main(int argc, const char * argv[]) {
    // Get how many students in array
    int numberOfStudents = sizeof(CIS054)/sizeof(Student);
    
    // Display the header line
    cout << "               CIS 054 C/C++ Programming                 " << endl;
    cout << "=========================================================" << endl;
    cout << "  " << std::left << setw(7) << "ID#" << setw(22) << "Name"
         << setw(22) << "Major" << "GPA" << endl;
    cout << "=========================================================" << endl;
    cout << setiosflags(ios::fixed | ios::showpoint);   // Used to show decimal
    cout << setprecision(2);
    // List of all the students in the course
    for (int i = 0; i < numberOfStudents; i++) {
        cout << std::left << "  " << setw(5) << setfill('0') << CIS054[i].getIdNumber() << "  "
             << setw(20) << setfill(' ') << CIS054[i].getName() << "  "
             << setw(20) << CIS054[i].getMajor() << "  "
             << CIS054[i].getGpa() << endl;
    }   // End of loop
    
    cout << endl;   // Blank line between students names and grades
    
    // Compute average gpa of all students
    double total = 0;
    for (int i = 0; i < numberOfStudents; i++)
        total += CIS054[i].getGpa();   // Add all gpas together
    
    double average = total / numberOfStudents;    // Divide total by number of students
    
    // Print massage
    cout << setiosflags(ios::fixed | ios::showpoint);   // Used to show decimal
    cout << "  " << "The Average GPA of all the students is " << average << endl << endl;
    
    
        

    
    return 0;
}
