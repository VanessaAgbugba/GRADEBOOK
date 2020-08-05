#include "Person.h"
#include <iostream>
using namespace std;
Person::Person()
{
name = " ";
age = 0;
ssn = 000000000;
}
 
Person::Person(string name, int age, int ssn)
{
this->name = name;
this->age = age;
this->ssn = ssn;
}
 
Person::Person(const Person& person)
{
name = person.name;
age = person.age;
ssn = person.ssn;
}
 
Person::Person(string name)
{
this->name = name;
}
void Person::setName(string name)
{
this->name = name;
}
string Person::getName() const
{
return name;
}
 
void Person::setSSN(int ssn)
{
this->ssn = ssn;
}
 
int Person::getSSN() const
{
return ssn;
}
 
void Person::setAge(int age)
{
this->age = age;
}
 
int Person::getAge() const
{
return age;
}
 
 
void Person::printInfo()
{
cout << "Name: " << name << endl;
cout << "Age: " << age << endl;
cout << "SSN: " << ssn << endl;
 
}
