#include "Student.h"
#include <iostream>
#include <string>
using namespace std;
 
Student::Student() : Person()
{
id = 00000;
classification = " ";
major1 = " ";
major2 = " ";
}
 
Student::Student(string name, int age, int ssn, int id, string classification, string major1, string major2, string minor1, string minor2) : Person(name, age, ssn) 
{
this->id = id;
this->classification = classification;
this->major1 = major1;
this->major2 = major2;
this->minor1 = minor1;
this->minor2 = minor2;
}
 
 
void Student::setID(int id)
{
this->id = id;
}
 
int Student::getID() const
{
return id;
}
 
void Student::setClassification(string classification)
{
this->classification = classification;
}
 
string Student::getClassification() const
{
return classification;
}
void Student::setMajor1(string major1)
{
this->major1 = major1;
}
 
string Student::getMajor1() const
{
return major1;
}
 
void Student::setMajor2(string major2)
{
this->major2 = major2;
}
string Student::getMajor2() const
{
return major2;
}
void Student::setMinor1(string minor1)
{
this->minor1 = minor1;
}
string Student::getMinor1() const
{
return minor1;
}
void Student::setMinor2(string minor2)
{
this->minor2 = minor2;
}
string Student::getMinor2() const
{
return minor2;
}
void Student::printInfo() //override
{
cout << endl;
cout << "Student's Information: " << endl;
cout << "----------------------------------" << endl;
Person::printInfo();
cout << "ID: " << id << endl;
cout << "Classification: " << classification << endl;
cout << "Major 1: " << major1 << endl;
cout << "Major 2: " << major2 << endl;
cout << "Minor 1: " << minor1 << endl;
cout << "Minor 2: " << minor2 << endl;
}
 
