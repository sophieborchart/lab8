#ifndef __STUDENT_CPP__
#define __STUDENT_CPP__

#include <string>
#include <iostream>
#include "Person.h"
#include "Student.h"
using namespace std;

Student::Student()
{

}

Student::Student(int urid, std::string netid, std::string lname, std::string fname,
	int dob_day, int dob_mo, int dob_yr,
	std::string email, std::string address, long phone,
	int day_admit, int month_admit, int year_admit,
	School school, bool is_full_time,
	double units_completed):Person()
{

}

Student::~Student() {}

std::list<std::string> Student::getCourses()
{
	return _courses;
}

void Student::addCourse(std::string course)
{
	_courses.push_back(course);
}

void Student::removeCourse(std::string course)
{
	_courses.remove(course);
}

void Student::printCourses()
{
	std::list<std::string>::iterator it;
	for(it = _courses.begin(); it != _courses.end(); ++it)
		std::cout << *it << ", ";
}

void Student::setCourses(std::list<std::string> courses)
{
	_courses = courses;
}

void Student::clearCourses()
{
	_courses.clear();
}

struct tm Student::getAdmitDate()
{
	struct tm admitInformation;
	admitInformation.tm_mday = day_admit;
	admitInformation.tm_mon = month_admit;
	admitInformation.tm_year = year_admit;
	return admitInformation;
}

Student::School Student::getSchool()
{
 	return _school;
}

double Student::getGPA()
{
	return _gpa;
}

double Student::getUnitsCompleted()
{
	return units_completed;
}

bool Student::isFullTime()
{
	return is_full_time;
}

void Student::setAdmitDate(int day, int month, int year)
{
	day_admit = day;
	month_admit = month;
	year_admit = year;
}

void Student::setSchool(School school)
{
	_school = school;
}

void Student::setGPA(double gpa)
{
	_gpa = gpa;
}

void Student::setUnitsCompleted(double units)
{
	units_completed = units;
}

void Student::setFullTimeStatus(bool isFullTime) {
	is_full_time = isFullTime;
}

#endif
