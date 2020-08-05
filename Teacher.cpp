Teacher.cpp
#include "Teacher.h"
#include <iostream>
using namespace std;
 
Teacher::Teacher() : Person()
{
name = " ";
}
 
Teacher::Teacher(string name) : Person(name)
{
this->name = name;
}
 
 
void Teacher::printInfo()
{
cout << "Course Instructor Information: " << endl;
Person::printInfo(); 
 
}
