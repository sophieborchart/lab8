// Names: Sophie Borchart and Matthew Johnson

#include <iostream>
#include "Person.h"
#include "Student.h"
using namespace std;

int main(){

	cout << "-----------------------------------------------------" << endl;
	cout << "------------------Testing Person---------------------" << endl;

//Testing setFirstname()
	cout << "Testing setters/getters:" << endl;
	cout << "-----------------------------------------------------" << endl << endl;
	cout << "Person p;" << endl;
	Person p;

	cout << "First Name Before: " << p. getFirstName() << endl << endl;
	cout << "After setting first name to Sophie" << endl;
	p.setFirstName("Sophie");
	cout << "First Name: " << p.getFirstName() << " **** " << "[Expected: Sophie]" << endl << endl;

	cout << "------------------------------------------" << endl << endl;

//Testing setLastname()
	cout << "Last Name Before: " << p. getLastName() << endl << endl;
	cout << "After setting last name to Borchart" << endl;
	p.setLastName("Borchart");
	cout << "Last Name: " << p.getLastName() << " **** " << "[Expected: Borchart]" << endl << endl;


// Testing setDateOfBirth()
	cout << "-----------------------------------------------------" << endl << endl;
	cout << "p.setDateOfBirth(\"8-4-1999\")" << endl << endl;

	p.setDateOfBirth(4, 8, 1999);
	cout << p.getDateOfBirth().tm_mon << "-" << p.getDateOfBirth().tm_mday << "-" 
	<< p.getDateOfBirth().tm_year << " **** Expected[8-4-1999] " << endl;

//Testing setAddress()
	cout << "-----------------------------------------------------" << endl << endl;
	cout << "Address Before: " << p.getAddress() << endl << endl;
	cout << "Setting address to '5657 Angouleme Lane' " << endl << endl;
	p.setAddress("5657 Angouleme Lane");
	cout << "Address: " << p.getAddress() << " **** " << " [Expected: 5657 Angouleme Lane]" << endl << endl;

//Testing setNetID()
	cout << "-----------------------------------------------------" << endl << endl;
	cout << "NetID Before: " << p.getNetID() << endl << endl;

	cout << "Setting NetID to sb3jm " << endl;
	p.setNetID("sb3jm");
	cout << "NetID: " << p.getNetID() << " ****  " << "[Expected: sb3jm]" << endl << endl;

//Testing setURID()
	cout << "-----------------------------------------------------" << endl << endl;
	cout << "URID Before: " << p.getURID() << endl << endl;

	cout << "Setting URID to 46744559 " << endl;
	p.setURID(46744559);
	cout << "URID: " << p.getURID() << " **** " << "[Expected: 46744559]" << endl << endl;

//Testing setEmail()
	cout << "-----------------------------------------------------" << endl << endl;
	cout << "Email Before: " << p.getEmail() << endl << endl;

	cout << "Setting email to 'sophie.borchart@gmail.com' " << endl;
	p.setEmail("sophie.borchar@gmail.com");
	cout << "Email: " << p.getEmail() << " **** " << "[Expected: sophie.borchart@gmail.com] " << endl << endl;


//Testing setPhone()
	cout << "-----------------------------------------------------" << endl << endl;
	cout << "Phone Before: " << p.getPhone() << endl << endl;

	cout << "Setting phone to 8478571058" << endl;
	p.setPhone(8478571058);
	cout << "Phone: " << p.getPhone() << " **** " << "[Expected: 8478571058]" << endl << endl;

//Testing Student()
	cout << "-----------------------------------------------------" << endl;
	cout << "------------------Testing Student--------------------" << endl;
//Creating student
	Student s;

//Testing setAdmitDate() and getAdmitDate()
	cout << "-----------------------------------------------------" << endl << endl;
	cout << "s.setAdmitDate(\"5/5/2017\")" << endl;
	s.setAdmitDate(5, 5, 2017);
	cout << "Admit Date: " << s.getAdmitDate().tm_mday << "/" << s.getAdmitDate().tm_mon + 1 << "/" << s.getAdmitDate().tm_year + 1900
	<< "  [Expected: 5/5/2017]" << endl;

//Testing setSchool getSchool()
	cout << "-----------------------------------------------------" << endl << endl;
	cout << "School: " << s.getSchool() << "  [Expected: 2]" << endl;
	cout << "s.setSchool(\"RSB\")" << endl;
	s.setSchool(Student::RSB);
	cout << "School: " << s.getSchool() << "  [Expected: 3]" << endl;

//Testing addCourse(), removeCourse(), setCourses(), clearCourses(), and rintCourses()
	cout << "-----------------------------------------------------" << endl << endl;
	cout << "Courses: ";
	s.printCourses();
	cout << "  [Expected: ""]" << endl;
	cout << "s.addCourse(\"CMSC 222\") " << "s.addCourse(\"CMSC 240\")" << endl;
	s.addCourse("CMSC 222");
	s.addCourse("CMSC 240");
	cout << "Courses: ";
	s.printCourses();
	cout << "  [Expected: CMSC 222 CMSC 240]" << endl;
	cout << "s.removeCourse(\"CMSC 222\")" << endl;
	s.removeCourse("CMSC 222");
	cout << "Courses: ";
	s.printCourses();
	cout << "  [Expected: CMSC 240]" << endl;
	cout << "Student x;" << endl;
	Student x;
	cout << "x.addCourse(\"PSYC 333\")" << endl;
	x.addCourse("PSYC 333");
	cout << "s.setCourses(x.getCourses())" << endl;
	s.setCourses(x.getCourses());
	cout << "Courses: ";
	s.printCourses();
	cout << "  [Expected: PSYC 333]" << endl;

//Testing setGPA() and getGPA()
	cout << "-----------------------------------------------------" << endl << endl;
	cout << "GPA: " << s.getGPA() << "  [Expected: 0.0]" << endl;
	cout << "s.setGPA(3.99)" << endl;
	s.setGPA(3.99);
	cout << "GPA: " << s.getGPA() << "  [Expected: 3.99]" << endl;

//Testing setUnitsCompleted() and getUnitsCompleted()
	cout << "-----------------------------------------------------" << endl << endl;
	cout << "Units Completed: " << s.getUnitsCompleted() << "  [Expected: 0.0]" << endl;
	cout << "s.setUnitsCompleted(11.5)" << endl;
	s.setUnitsCompleted(11.5);
	cout << "Units Completed: " << s.getUnitsCompleted() << "  [Expected: 11.5]" << endl;

//Testing setFullTimeStatus() getFullTimeStatus()
	cout << "-----------------------------------------------------" << endl << endl;
	cout << "Full Time Status: " << s.isFullTime() << "  [Expected: 0]" << endl;
	cout << "s.setFullTimeStatus(true)" << endl;
	s.setFullTimeStatus(true);
	cout << "Full Time Status: " << s.isFullTime() << "  [Expected: 1]" << endl;


};