#include "Student.h"
#include "Person.h"
#include <iostream>
using namespace std;


int main() {

	Person p;
	Student s;
	cout << p.getFirstName() << endl;
	cout << "Person p;" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "Testing Constructors:" << endl;

	cout << "-------------------------------------------" << endl;

	Person p2(123, "netid", "lname", "fnaolol", 22, 33, 1, "do@wd.edu", "37ydjk", 911);
	cout << "Person p2(123, \"netid\", \"lname\", \"fnaolol\", 22, 33, 44, \"do@wd.edu\", \"37ydjk\", 911)" << endl;
	cout << p2.getFirstName() << " [Expected: fnaolol]" << endl;
	cout << p2.getLastName() << " [Expected: lname]" << endl;
	cout << p2.getAddress() << " [Expected: 37ydjk]" << endl;
	cout << p2.getNetID() << " [Expected: netid]" << endl;
	cout << p2.getURID() << " [Expected: 123]" << endl;
	cout << p2.getDateOfBirth().tm_mon << "/" << p2.getDateOfBirth().tm_mday << "/"
			 << p2.getDateOfBirth().tm_year + 1900 << " [Expected: 33/22/1901]" << endl;
	cout << p2.getEmail() << " [Expected: do@wd.edu]" << endl;
	cout << p2.getPhone() << " [Expected: 911]" << endl;

	cout << "-------------------------------------------" << endl;

	Person p3(p2);
	cout << "Person p3(p2)" << endl;
	cout << p3.getFirstName() << " [Expected: fnaolol]" << endl;
	cout << p3.getLastName() << " [Expected: lname]" << endl;
	cout << p3.getAddress() << " [Expected: 37ydjk]" << endl;
	cout << p3.getNetID() << " [Expected: netid]" << endl;
	cout << p3.getURID() << " [Expected: 123]" << endl;
	cout << p3.getDateOfBirth().tm_mon << "/" << p3.getDateOfBirth().tm_mday << "/"
			 << p3.getDateOfBirth().tm_year + 1900 << " [Expected: 33/22/1901]" << endl;
	cout << p3.getEmail() << " [Expected: do@wd.edu]" << endl;
	cout << p3.getPhone() << " [Expected: 911]" << endl;
	cout << "-------------------------------------------" << endl;

	Student s2(12345, "qwerty", "Brown", "John", 4, 8, 1999-1900, "x@x.com", "123 Maple Ln", 12345678, 1, 1, 2017-1900, Student::AS, false, 23.5);
	cout << "Student s2(12345, \"qwerty\", \"Brown\", \"John\", 4, 8, 1999-1900, \"x@x.com\", \123 Maple Ln\", 12345678, 1, 1, 2017-1900, Student::AS, false, 23.5)" << endl;
	cout << s2.getAdmitDate().tm_mon << "/" << s2.getAdmitDate().tm_mday << "/"
			 << s2.getAdmitDate().tm_year + 1900 << " [Expected: 1/1/2017]" << endl;
  cout << s2.getSchool() << " [Expected: 0]" << endl;
  cout << s2.getUnitsCompleted() << " [Expected: 23.5]" << endl;
	cout << s2.getSchool() << " [Expected: 0]" << endl;
	cout << s2.isFullTime() << " [Expected: 0]" << endl;

	cout << "Testing Person setters/getters:" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "Test: " << endl;
	cout << "\t" << "p.setFirstName(\"Sophie\")" << endl;

	cout << "Output: " << endl;
  p.setFirstName("Sophie");

	cout << "\t" << p.getFirstName() << " [Expected: Sophie]" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "Test: " << endl;
	p.setLastName("Borchart");
	cout << "\t" << "p.setLastName(\"Borchart\")" << endl;
	cout << p.getLastName() << " [Expected: Borchart]" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "Test: " << endl;
	cout << "\t" << "p.setDateOfBirth(24, 7, (1998-1900))" << endl;
	p.setDateOfBirth(24, 7, (1998-1900));

	cout << p.getDateOfBirth().tm_mon << "/" << p.getDateOfBirth().tm_mday << "/"
			 << p.getDateOfBirth().tm_year + 1900 << " [Expected: 7/24/1998]" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "Test: " << endl;
	cout << "\t" << "p.setAddress(\"28 Westhampton Way\")" << endl;
	p.setAddress("28 Westhampton Way");
	cout << p.getAddress() << " [Expected: 28 Westhampton Way]" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "Test: " << endl;
	cout << "\t" << "p.setNetID(\"sb3jm\")" << endl;
	p.setNetID("sb3jm");
	cout << p.getNetID() << " [Expected: sb3jm]" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "Test: " << endl;
	cout << "\t" << "p.setURID(12345678)" << endl;
	p.setURID(12345678);
	cout << p.getURID() << " [Expected: 12345678]" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "Test: " << endl;
	cout << "\t" << "p.setEmail(\"sophie.borchart@richmond.edu\")" << endl;
	p.setEmail("sophie.borchart@richmond.edu");
	cout << p.getEmail() << " [Expected: sophie.borchart@richmond.edu]" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "Test: " << endl;
	cout << "\t" << "p.setPhone(8478571058)" << endl;
	p.setPhone(8478571058);
	cout << p.getPhone() << " [Expected: 8478571058]" << endl;

	cout << "-------------------------------------------" << endl;


	cout << "Student s; " << endl;

	cout << "-------------------------------------------" << endl;

	cout << "Testing Student setters/getters:" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "Test: " << endl;
	cout << "\t" << "s.addCourse(\"CMSC 240\")" << endl;
	cout << "\t" << "s.addCourse(\"CMSC 222\")" << endl;
    s.addCourse("CMSC 240");
    s.addCourse("CMSC 222");
	std::list<std::string> testCourses = s.getCourses();
	s.printCourses();
	cout << "[Expected: CMSC 240, CMSC 222]" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "Test: " << endl;
	cout << "\t" << "s.removeCourse(\"CMSC 240\")" << endl;
    s.removeCourse("CMSC 240");
		testCourses = s.getCourses();
		s.printCourses();
	cout << "[Expected: CMSC 222]" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "Test: " << endl;
	cout << "\t" << "s.printCourses()" << endl;
	s.printCourses();
	cout << "[Expected: CMSC 222]" << endl;


	cout << "-------------------------------------------" << endl;

	cout << "Test: " << endl;
	cout << "\t" << "std::list<std::string> test2Courses" << endl << "\t" <<
		"test2Courses.push_back(\"CMSC 301\")" << endl << "\t" <<
		"test2Courses.push_back(\"CMSC 315\")" << endl << "\t" <<
		"test2Courses.push_back(\"MATH 245\")" << endl;
	std::list<std::string> test2Courses;
		test2Courses.push_back("CMSC 301");
		test2Courses.push_back("CMSC 315");
		test2Courses.push_back("MATH 245");
    s.setCourses(test2Courses);
		s.printCourses();
	cout << "[Expected: CMSC 301, CMSC 315, MATH 245]" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "Test: " << endl;
	cout << "\t" << "s.clearCourses()" << endl;
    s.clearCourses();
		s.printCourses();
		cout << endl;
	cout << "[Expected: ]" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "Test: " << endl;
	cout << "\t" << "s.setAdmitDate(\"2/24/2017\")" << endl;
    s.setAdmitDate(24, 2, 2017-1900);
	cout << s.getAdmitDate().tm_mon << "/" << s.getAdmitDate().tm_mday << "/"
			 << s.getAdmitDate().tm_year + 1900 << " [Expected: 2/24/2017]" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "Test: " << endl;
	cout << "\t" << "s.setSchool(Student::JSLS)" << endl;
    s.setSchool(Student::JSLS);
	cout << s.getSchool() << " [1]" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "Test: " << endl;
	cout << "\t" << "s.setGPA(3.12)" << endl;
    s.setGPA(3.12);
	cout << s.getGPA() << " [Expected: 3.12]" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "Test: " << endl;
	cout << "\t" << "s.setUnitsCompleted(18.2)" << endl;
    s.setUnitsCompleted(18.2);
	cout << s.getUnitsCompleted() << " [Expected: 18.2]" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "Test: " << endl;
	cout << "\t" << "s.setFullTimeStatus(true)" << endl;
    s.setFullTimeStatus(true);
	cout << s.isFullTime() << " [Expected: 1]" << endl;

	cout << "-------------------------------------------" << endl;

	 return 0;
}
