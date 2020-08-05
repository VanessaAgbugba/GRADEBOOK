#pragma once
#ifndef TEACHER_H
#define TEACHER_H
#include "Person.h"
#include <string>
 
class Teacher : public Person
{
public:
Teacher();
Teacher(string name);
void printInfo();
 
private:
string name;
};
