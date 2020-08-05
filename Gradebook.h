#pragma once
#ifndef GRADEBOOK_H
#define GRADEBOOK_H
 
#include "Student.h"
#include "Course.h"
#include <vector>
#include <string>
using namespace std;
 
class GradeBook 
{
public:
void studentInfo(vector<Student>& newStudentInfo, vector<Course>& newCourseInfo);
void printInfo(const vector<Student>& newStudentInfo, const vector<Course>& newCourseInfo);
 
private:
int classSize;
};
 
 
#endif
 
