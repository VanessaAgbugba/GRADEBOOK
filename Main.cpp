#include <iostream>
#include "Student.h"
#include "Teacher.h"
#include "Course.h"
#include "GradeBook.h"
#include <vector>
#include <string>
#include <stdlib.h>
using namespace std;
 
void printData(Person* person);
 
int main()
{
GradeBook courses;
vector<Student> newStudentInfo;
vector<Course> newCourseInfo;
courses.studentInfo(newStudentInfo, newCourseInfo);
system("cls");
courses.printInfo(newStudentInfo, newCourseInfo);
 
 
 
return 0;
}
 
void printData(Person* person)
{
person->printInfo();
}
