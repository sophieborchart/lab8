// Names: Sophie Borchart and Matthew Johnson

#ifndef __STUDENT_CPP__
#define __STUDENT_CPP__

#include <list>
#include <iostream>
#include "Student.h"

Student::Student(): 
Person(000, "Empty", "Constructor", "Default", 0, 0, 0, "Empty", "Empty", 0000000000),
day_admit(0), month_admit(0), year_admit(0), school(LAW), is_full_time(false), 
units_completed(0.0), gpa(0.0), courseList(){
}

Student::~Student(){}

Student::Student(const Student& other):
Person(other), day_admit(other.day_admit), month_admit(other.month_admit),
year_admit(other.year_admit), school(other.school), is_full_time(other.is_full_time),
units_completed(other.units_completed), gpa(other.gpa), courseList(other.courseList)
{} 
				// call Person(other) on implementation, copy constructor

Student::Student(int urid, std::string netid, std::string lname, std::string fname, 
	int dob_day, int dob_mo, int dob_yr, 
	std::string email, std::string address, long phone,
	int day_admit, int month_admit, int year_admit,
	School school, bool is_full_time, 
	double units_completed, double gpa, std::list<std::string> courseList) :

Person(urid, netid, lname, fname, dob_day, dob_mo, dob_yr, email, 
	address, phone), day_admit(day_admit), month_admit(month_admit), year_admit(year_admit),
school(school), is_full_time(is_full_time),units_completed(units_completed),
gpa(gpa), courseList(courseList){
}

std::list<std::string> Student::getCourses(){
	return courseList;
}
void Student::addCourse(std::string course){
	courseList.push_back(course);
}
void Student::removeCourse(std::string course){
	courseList.remove(course);
}
void Student::printCourses(){
	for (auto v : courseList){
		std::cout << v << " ";
	}
}
void Student::setCourses(std::list<std::string> courses){
	courseList = courses;
}
void Student::clearCourses(){
	courseList.clear();
}

struct tm Student::getAdmitDate(){

	struct tm admitDate;
	admitDate.tm_mday = day_admit;
	admitDate.tm_mon = month_admit -1;
	admitDate.tm_year = year_admit - 1900;

	return admitDate;
}
Student::School Student::getSchool(){
	return school;
}
double Student::getGPA(){
	return gpa;
}
double Student::getUnitsCompleted(){
	return units_completed;
}
bool Student::isFullTime(){
	return is_full_time;
}

void Student::setAdmitDate(int day, int month, int year){
	day_admit = day;
	month_admit = month;
	year_admit = year;
}
void Student::setSchool(School school){
	this->school = school;
}
void Student::setGPA(double gpa){
	this->gpa = gpa;
}
void Student::setUnitsCompleted(double units){
	units_completed = units;
}
void Student::setFullTimeStatus(bool isFullTime){
	is_full_time = isFullTime;
}

#endif