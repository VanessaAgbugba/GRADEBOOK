#include "Course.h"
#include "Student.h"
#include <iostream>
#include <string>
using namespace std;
 
Course::Course()
{
courseName = " ";
courseID = " ";
score = 0;
grade = ' ';
}
Course::Course(string name,int age, int ssn, string courseName, string courseID, double score, char grade)
{
courseName = " ";
courseID = "";
score = 0.0;
}
 
 
string Course::getCourseName() const
{
return courseName;
}
void Course::setCourseName(string courseName)
{
this->courseName = courseName;
}
string Course::getCourseID() const
{
return courseID;
}
void Course::setCourseID(string courseID)
{
this->courseID = courseID;
}
double Course::getScore() const
{
return score;
}
void Course::setScore(double score)
{
this->score = score;
}
 
 
char Course::getGrade() const
{
cout << "Test score: " << score << endl;
 
if (score <= 100 && score >= 90)
return 'A';
else if (score < 90 && score >= 80)
return 'B';
else if (score < 80 && score >= 70)
return 'C';
else if (score < 70 && score >= 50)
return 'D';
else if (score < 50)
return 'F';
else
return ' ';
}
void Course::setGPA(double gpa)
{
gpa = getGrade();
}
 
 
string Course::getcourseTeaching() const
{
return courseName;
}
 
void Course::printInfo()
{
cout << "Course Name: " << courseName << endl;
cout << "Course ID: " << courseID << endl;
cout << "Scores: " << score;
cout << "Final Grade: " << grade << endl;
}
 
