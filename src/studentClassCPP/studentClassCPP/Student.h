//
//  Student.h
//  studentClassCPP
//
//  Created by Frank bernal on 3/30/22.
//

// Using Strings
#include <string>
// Using namespace std
using namespace std;

// Make sure to only define Student.h once
#ifndef Student_h
#define Student_h

// Start class
class Student {
    // Private member data
private:
    string name;
    int IdNumber;
    string major;
    double gpa;
    
    // Public member functions
public:
    // Constructors
    
    // Default constructor
    Student();
    // Constructor with 4 ARGS
    Student(string n, int id, string m, double g);
    
    // Mutators and accessors
    void setName(string n);
    string getName();
    void setIdNumber(int id);
    int getIdNumber();
    void setMajor(string m);
    string getMajor();
    void setGpa(double g);
    double getGpa();
    
};   // End of class

#endif /* Student_h */
