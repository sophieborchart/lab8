#ifndef __STUDENT_CPP__
#define __STUDENT_CPP__

#include <string>
#include <iostream>
#include "Person.h"
#include "Student.h"
using namespace std;

Student::Student(int urid, std::string netid, std::string lname, std::string fname,
	int dob_day, int dob_mo, int dob_yr,
	std::string email, std::string address, long phone,
	int day_admit, int month_admit, int year_admit,
	/*School school, */bool is_full_time,
	double units_completed):Person() {

}

Student::~Student() {}

std::list<std::string> Student::getCourses() {

	return courses;
}

void Student::addCourse(std::string course) {

}

void Student::removeCourse(std::string course) {

}
void Student::printCourses() {

}
void Student::setCourses(std::list<std::string> courses) {

}

void Student::clearCourses() {

}

struct tm Student::getAdmitDate() {

}

// School Student::getSchool() {
//
// }

double Student::getGPA() {
	return 0.0;
}

double Student::getUnitsCompleted() {
	return 0.0;
}

bool Student::isFullTime() {
	return true;
}

void Student::setAdmitDate(int day, int month, int year) {

}

void Student::setSchool(School school) {

}

void Student::setGPA(double gpa) {

}

void Student::setUnitsCompleted(double units) {

}

void Student::setFullTimeStatus(bool isFullTime) {

}

#endif
