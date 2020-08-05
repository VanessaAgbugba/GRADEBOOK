#pragma once
#ifndef COURSE_H
#define COURSE_H
#include <string>
#include <vector>
#include "Student.h"
#include "Teacher.h"
#include <iostream>
using namespace std;
 
class Course : public Student
{
public:
Course();
Course(string name, int age, int ssn, string courseName, string courseID, double score, char grade);
 
string getCourseName() const;
void setCourseName(string courseName);
string getCourseID() const;
void setCourseID(string courseID);
double getScore() const;
void setScore(double score);
char getGrade() const;
void setGPA(double gpa);
string getcourseTeaching() const;
void printInfo();
 
 
private:
string courseName;
string courseID;
double score;
char grade;
};
 
 
#endif
