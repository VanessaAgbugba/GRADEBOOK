#pragma once
#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;
 
class Person //ABSTRACT CLASS
{
public:
    
    Person();
    Person(string name, int age, int ssn);
    Person(string name);
    Person(const Person&);
 
  
    string getName() const;
    void setName(string name);
    int getSSN() const;
    void setSSN(int ssn);
    int getAge() const;
    void setAge(int age);
    virtual void printInfo() = 0;
 
 
protected:
    string name;
    int age;
    int ssn;
 
 
};
 
#endif
