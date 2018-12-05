// Names: Sophie Borchart and Matthew Johnson

#ifndef __STUDENT_CPP__
#define __STUDENT_CPP__

#include <string>
#include <iostream>
#include "Person.h"
#include "Student.h"
using namespace std;

// default constructor for Student

Student::Student()
{
	urid = 12345;
	netid = "";
	lname = "";
	fname = "";
	dob_day = -1;
	month_admit = -1;
	dob_year = -1;
	email = "";
	address = "";
	phone = -1;
	day_admit = -1;
	month_admit = -1;
	year_admit = -1;
	_school = Student::SPCS;
	is_full_time = true;
	units_completed = -1;
}

Student::Student(const Student& other)
// copy constructor for Student
{
	urid = other.urid;
	netid = other.netid;
	lname = other.lname;
	fname = other.fname;
	dob_day = other.dob_day;
	month_admit = other.month_admit;
	dob_year = other.dob_year;
	email = other.email;
	address = other.address;
	phone = other.phone;
	day_admit = other.day_admit;
	month_admit = other.month_admit;
	year_admit = other.year_admit;
	_school = other._school;
	is_full_time = other.is_full_time;
	units_completed = other.units_completed;
}


// constructor for Person with instance variables as parameters

Student::Student(int urid, std::string netid, std::string lname, std::string fname,
	int dob_day, int dob_mo, int dob_yr,
	std::string email, std::string address, long phone,
	int day_admit, int month_admit, int year_admit,
	School school, bool is_full_time,
	double units_completed):Person()
{
	this->urid = urid;
	this->netid = netid;
	this->lname = lname;
	this->fname = fname;
	this->dob_day = dob_day;
	this->dob_month = dob_mo;
	this->dob_year = dob_yr + 1900;
	this->email = email;
	this->address = address;
	this->phone = phone;
	this->day_admit = day_admit;
	this->month_admit = month_admit;
	this->year_admit = year_admit;
	this->_school = school;
	this->is_full_time = is_full_time;
	this->units_completed = units_completed;
}

// destructor
Student::~Student() {}

// gets Student's _courses
std::list<std::string> Student::getCourses()
{
	return _courses;
}
// adds Student's course
void Student::addCourse(std::string course)
{
	_courses.push_back(course);
}

// removes Student's course
void Student::removeCourse(std::string course)
{
	_courses.remove(course);
}

// prints Student's courses
void Student::printCourses()
{
	std::list<std::string>::iterator it;
	for(it = _courses.begin(); it != _courses.end(); ++it)
		std::cout << *it << ", ";
}

// sets Student's courses
void Student::setCourses(std::list<std::string> courses)
{
	_courses = courses;
}

// clears Student's courses
void Student::clearCourses()
{
	_courses.clear();
}
 // struct representing Student's admit date information
struct tm Student::getAdmitDate()
{
	struct tm admitInformation;
	admitInformation.tm_mday = day_admit;
	admitInformation.tm_mon = month_admit;
	admitInformation.tm_year = year_admit;
	return admitInformation;
}

// gets Student's school
Student::School Student::getSchool()
{
 	return _school;
}
// gets Student's GPA
double Student::getGPA()
{
	return _gpa;
}

// gets Student's units completed
double Student::getUnitsCompleted()
{
	return units_completed;
}

// gets Student's full time status
bool Student::isFullTime()
{
	return is_full_time;
}

// sets Student's admit date
void Student::setAdmitDate(int day, int month, int year)
{
	day_admit = day;
	month_admit = month;
	year_admit = year;
}

// sets Student's school
void Student::setSchool(School school)
{
	_school = school;
}

// sets Student's GPA
void Student::setGPA(double gpa)
{
	_gpa = gpa;
}

// sets Student's units completed
void Student::setUnitsCompleted(double units)
{
	units_completed = units;
}

// sets Student's full time status
void Student::setFullTimeStatus(bool isFullTime) {
	is_full_time = isFullTime;
}

#endif
