#pragma once
#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
#include <iostream>
#include <string>
using namespace std;
 
class Student : public Person
{
public:
Student();
Student(string name, int age, int ssn, int id, string classification, string major1, string major2, string minor1, string minor2);
 
void setID(int id);
int getID() const;
void setClassification(string classification);
string getClassification() const;
void setMajor1(string major1);
string getMajor1() const;
void setMajor2(string major2);
string getMajor2() const;
void setMinor1(string minor1);
string getMinor1() const;
void setMinor2(string minor2);
string getMinor2() const;
void printInfo(); 
 
protected:
int id;
string classification;
string major1, major2, minor1, minor2;
};
 
 
#endif
