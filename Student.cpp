#include "Student.h"
#include <iostream>
#include<cstring>

using namespace std;

// Assign studentId and name
void Student::assignDetails(int id, char n[]) {
  studentId =id;
  strcpy(name,n);
  
}

// Display StudentId and Name
void Student::display() {
  cout<<"student name is "<<name<<endl;
  cout<<"ID: "<<studentId;
  
}
