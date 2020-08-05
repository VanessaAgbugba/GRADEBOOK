#include <iostream>
#include "Student.h"
#include "Teacher.h"
#include "GradeBook.h"
#include "Course.h"
#include <string>
#include <vector>
 
 
void GradeBook::studentInfo(vector<Student>& newStudentInfo, vector<Course>& newCourseInfo)
{
 
 
string name, major1, major2, minor1, minor2, classification;
int courseSize, age = 0, ssn = 0, id=0;
double score;
string courseName, courseID, courseInstructor;
char grade;
cout << "How many students are in this class? ";
cin >> classSize;
 
for (int i = 0, j = 0; i < classSize; i++, j++)
{
Student students(name, age, ssn, id, major1, major2, minor1, minor2, classification);
cout << "Student " << i + 1 << endl;
cout << "Enter Name: ";
cin.ignore();
getline(cin, name);
students.setName(name);
cout << "Enter Age: ";
cin >> age;
students.setAge(age);
cout << "Enter SSN: ";
cin >> ssn;
students.setSSN(ssn);
cout << "Enter ID: ";
cin >> id;
students.setID(id);
cout << "Enter Classification: ";
cin >> classification;
students.setClassification(classification);
cout << "Enter Major 1: ";
cin.ignore();
getline(cin, major1);
students.setMajor1(major1);
cout << "Enter Major 2: (Enter 'NIL' if unapplicable)";
getline(cin, major2);
students.setMajor2(major2);
cout << "Enter Minor 1: (Enter 'NIL' if unapplicable)";
getline(cin, minor1);
students.setMinor1(minor1);
cout << "Enter Minor 2: (Enter 'NIL' if unapplicable)";
getline(cin, minor2);
students.setMinor2(minor2);
cout << endl;
newStudentInfo.push_back(students);
 
Course courses(name, age, ssn, courseName, courseID, score = 0.0, grade = ' ');
cout << "Enter Course Name: ";
getline(cin, courseName);
courses.setCourseName(courseName);
cout << "Enter Course ID: ";
cin >> courseID;
courses.setCourseID(courseID);
cout << "Enter Score: ";
cin >> score;
courses.setScore(score);
 
 
newCourseInfo.push_back(courses);
 
cout << endl;
}
cout << endl;
}
 
 
void GradeBook::printInfo(const vector<Student>& newStudentInfo, const vector<Course>& newCourseInfo)
{
for (unsigned int i = 0, j = 0; i < newStudentInfo.size(); i++, j++)
{
cout << "Student " << i + 1 << " Info" << endl;
cout << "-----------------------------------------------" << endl;
cout << "Student Name: " << newStudentInfo[i].getName() << endl;
cout << "Student Age: " << newStudentInfo[i].getAge() << endl;
cout << "Student SSN: " << newStudentInfo[i].getSSN() << endl;
cout << "Student Classification: " << newStudentInfo[i].getClassification() << endl;
cout << "Student Major 1: " << newStudentInfo[i].getMajor1() << endl;
cout << "Student Major 2: " << newStudentInfo[i].getMajor2() << endl;
cout << "Student Minor 1: " << newStudentInfo[i].getMinor1() << endl;
cout << "Student Minor 2: " << newStudentInfo[i].getMinor2() << endl;
cout << endl;
 
 
cout << "Course " << " Information: " << endl;
cout << "Course Name: " << newCourseInfo[j].getCourseName() << endl;
cout << "Course ID:  " << newCourseInfo[j].getCourseID() << endl;
cout << "Score: " << newCourseInfo[j].getScore() << endl;
cout << "Grade: " << newCourseInfo[j].getGrade() << endl;
cout << endl;
 
 
}
cout << endl;
}
