// Names: Sophie Borchart and Matthew Johnson

#include "Student.h"
#include "Person.h"
#include <iostream>
using namespace std;



//might need to fix DOB/admit dates because 1900 is messing it up


int main() {

	Person p;
	cout << p.getFirstName() << endl;
	cout << "Person p;" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "Testing Constructors:" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "Test: " << endl;
	Person p2(123, "netid", "lname", "fnaolol", 22, 33, 1, "do@wd.edu", "37ydjk", 911);
	cout << "\t" << "Person p2(123, \"netid\", \"lname\", \"fnaolol\", 22, 33, 44, \"do@wd.edu\", \"37ydjk\", 911)" << endl;
	cout << endl << "Output: " << endl;
	cout << "\t" << p2.getFirstName() << " [Expected: fnaolol]" << endl;
	cout << "\t" << p2.getLastName() << " [Expected: lname]" << endl;
	cout << "\t" << p2.getAddress() << " [Expected: 37ydjk]" << endl;
	cout << "\t" << p2.getNetID() << " [Expected: netid]" << endl;
	cout << "\t" << p2.getURID() << " [Expected: 123]" << endl;
	cout << "\t" << p2.getDateOfBirth().tm_mon << "/" << p2.getDateOfBirth().tm_mday << "/"
			 << p2.getDateOfBirth().tm_year << " [Expected: 33/22/1901]" << endl;
	cout << "\t" << p2.getEmail() << " [Expected: do@wd.edu]" << endl;
	cout << "\t" << p2.getPhone() << " [Expected: 911]" << endl;

	cout << "-------------------------------------------" << endl;

	Person p3(p2);
	cout << "Test: " << endl;
	cout << "\t" << "Person p3(p2)" << endl;
	cout << endl << "Output: " << endl;
	cout << "\t" << p3.getFirstName() << " [Expected: fnaolol]" << endl;
	cout << "\t" << p3.getLastName() << " [Expected: lname]" << endl;
	cout << "\t" << p3.getAddress() << " [Expected: 37ydjk]" << endl;
	cout << "\t" << p3.getNetID() << " [Expected: netid]" << endl;
	cout << "\t" << p3.getURID() << " [Expected: 123]" << endl;
	cout << "\t" << p3.getDateOfBirth().tm_mon << "/" << p3.getDateOfBirth().tm_mday << "/"
			 << p3.getDateOfBirth().tm_year + 1900 << " [Expected: 33/22/1901]" << endl;
	cout << "\t" << p3.getEmail() << " [Expected: do@wd.edu]" << endl;
	cout << "\t" << p3.getPhone() << " [Expected: 911]" << endl;
	cout << "-------------------------------------------" << endl;


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
	cout << "Output: " << endl;
	cout << "\t" << p.getLastName() << " [Expected: Borchart]" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "Test: " << endl;
	cout << "\t" << "p.setDateOfBirth(24, 7, (1998-1900))" << endl;
	p.setDateOfBirth(24, 7, (1998-1900));

	cout << "Output: " << endl;
	cout << "\t" << p.getDateOfBirth().tm_mon << "/" << p.getDateOfBirth().tm_mday << "/"
			 << p.getDateOfBirth().tm_year + 1900 << " [Expected: 7/24/1998]" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "Test: " << endl;
	cout << "\t" << "p.setAddress(\"28 Westhampton Way\")" << endl;
	p.setAddress("28 Westhampton Way");
	cout << "Output: " << endl;
	cout << "\t" << p.getAddress() << " [Expected: 28 Westhampton Way]" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "Test: " << endl;
	cout << "\t" << "p.setNetID(\"sb3jm\")" << endl;
	p.setNetID("sb3jm");
	cout << "Output: " << endl;
	cout << "\t" << p.getNetID() << " [Expected: sb3jm]" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "Test: " << endl;
	cout << "\t" << "p.setURID(12345678)" << endl;
	p.setURID(12345678);
	cout << "Output: " << endl;
	cout << "\t" << p.getURID() << " [Expected: 12345678]" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "Test: " << endl;
	cout << "\t" << "p.setEmail(\"sophie.borchart@richmond.edu\")" << endl;
	p.setEmail("sophie.borchart@richmond.edu");
	cout << "Output: " << endl;
	cout << "\t" << p.getEmail() << " [Expected: sophie.borchart@richmond.edu]" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "Test: " << endl;
	cout << "\t" << "p.setPhone(8478571058)" << endl;
	p.setPhone(8478571058);
	cout << "Output: " << endl;
	cout << "\t" << p.getPhone() << " [Expected: 8478571058]" << endl;

	cout << "-------------------------------------------" << endl;








	Student s;

	cout << "Student s; " << endl;

	cout << "-------------------------------------------" << endl;

	cout << "Testing Constructors:" << endl;

	cout << "-------------------------------------------" << endl;


	cout << "Test: " << endl;
	Student s2(12345678, "netid1", "lname", "fname", 11, 11, 11, "xyz@richmond.edu", "123 lane", 1230987655, 21, 10, 11, Student::JSLS, true, 12.5);
	cout << "\t" << "Student s2(123, \"netid1\", \"lname\", \"fname\", 11, 11, 11, \"xyz@richmond.edu\", \"123 lane\", \"1230987655\", 21, 10, 11, Student::JSLS, true, 12.5)" << endl;
	cout << endl << "Output: " << endl;
	cout << "\t" << s2.getFirstName() << " [Expected: fnaolol]" << endl;
	cout << "\t" << s2.getLastName() << " [Expected: lname]" << endl;
	cout << "\t" << s2.getAddress() << " [Expected: 37ydjk]" << endl;
	cout << "\t" << s2.getNetID() << " [Expected: netid]" << endl;
	cout << "\t" << s2.getURID() << " [Expected: 123]" << endl;
	cout << "\t" << s2.getDateOfBirth().tm_mon << "/" << p2.getDateOfBirth().tm_mday << "/"
			 << s2.getDateOfBirth().tm_year + 1900 << " [Expected: 33/22/1901]" << endl;
	cout << "\t" << s2.getEmail() << " [Expected: do@wd.edu]" << endl;
	cout << "\t" << s2.getPhone() << " [Expected: 911]" << endl;
	cout << "\t" << s2.getAdmitDate().tm_mon << "/" << s2.getAdmitDate().tm_mday << "/"
			 << s2.getAdmitDate().tm_year + 1900 << " [Expected: 11/11/1911]" << endl;
	cout << "\t" << s2.getSchool() << " [Expected: 1]" << endl;
	cout << "\t" << s2.isFullTime() << " [Expected: 1]" << endl;
	cout << "\t" << s2.getUnitsCompleted() << " [Expected: 12.5]" << endl;



	cout << "-------------------------------------------" << endl;

	Student s3(s2);
	cout << "Test: " << endl;
	cout << "\t" << "Student s3(s2)" << endl;
	cout << endl << "Output: " << endl;
	cout << "\t" << s3.getFirstName() << " [Expected: fnaolol]" << endl;
	cout << "\t" << s3.getLastName() << " [Expected: lname]" << endl;
	cout << "\t" << s3.getAddress() << " [Expected: 37ydjk]" << endl;
	cout << "\t" << s3.getNetID() << " [Expected: netid]" << endl;
	cout << "\t" << s3.getURID() << " [Expected: 123]" << endl;
	cout << "\t" << s3.getDateOfBirth().tm_mon << "/" << p2.getDateOfBirth().tm_mday << "/"
			 << s3.getDateOfBirth().tm_year + 1900 << " [Expected: 33/22/1901]" << endl;
	cout << "\t" << s3.getEmail() << " [Expected: do@wd.edu]" << endl;
	cout << "\t" << s3.getPhone() << " [Expected: 911]" << endl;
	cout << "\t" << s3.getAdmitDate().tm_mon << "/" << s3.getAdmitDate().tm_mday << "/"
			 << s3.getAdmitDate().tm_year + 1900 << " [Expected: 10/21/1911]" << endl;	cout << "\t" << s3.getSchool() << " [Expected: 1]" << endl;
	cout << "\t" << s3.isFullTime() << " [Expected: 1]" << endl;
	cout << "\t" << s3.getUnitsCompleted() << " [Expected: 12.5]" << endl;




	cout << "-------------------------------------------" << endl;


	cout << "Testing Student setters/getters:" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "Test: " << endl;
	cout << "\t" << "s.addCourse(\"CMSC 240\")" << endl;
	cout << "\t" << "s.addCourse(\"CMSC 222\")" << endl;
    s.addCourse("CMSC 240");
    s.addCourse("CMSC 222");
	std::list<std::string> testCourses = s.getCourses();
	cout << "Output: " << endl;
	s.printCourses();
	cout << "\t" << "[Expected: CMSC 240, CMSC 222]" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "Test: " << endl;
	cout << "\t" << "s.removeCourse(\"CMSC 240\")" << endl;
  	s.removeCourse("CMSC 240");
	testCourses = s.getCourses();
	cout << "Output: " << endl;
	s.printCourses();
	cout << "\t" << "[Expected: CMSC 222]" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "Test: " << endl;
	cout << "\t" << "s.printCourses()" << endl;
	cout << "Output: " << endl;
	s.printCourses();
	cout << "\t" << "[Expected: CMSC 222]" << endl;


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
		cout << "Output: " << endl;
		s.printCourses();
	cout << endl << "\t" << "[Expected: CMSC 301, CMSC 315, MATH 245]" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "Test: " << endl;
	cout << "\t" << "s.clearCourses()" << endl;
    s.clearCourses();
		cout << "Output: " << endl;
		s.printCourses();
		cout << endl;
	cout << "\t" << "[Expected: ]" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "Test: " << endl;
	cout << "\t" << "s.setAdmitDate(\"2/24/2017\")" << endl;
    s.setAdmitDate(24, 2, 2017-1900);
	cout << "Output: " << endl;
	cout << "\t" << s.getAdmitDate().tm_mon << "/" << s.getAdmitDate().tm_mday << "/"
			 << s.getAdmitDate().tm_year + 1900 << " [Expected: 2/24/2017]" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "Test: " << endl;
	cout << "\t" << "s.setSchool(Student::JSLS)" << endl;
	cout << "Output: " << endl;
    s.setSchool(Student::JSLS);
	cout << "\t" << s.getSchool() << " [1]" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "Test: " << endl;
	cout << "\t" << "s.setGPA(3.12)" << endl;
    s.setGPA(3.12);
	cout << "Output: " << endl;
	cout << "\t" << s.getGPA() << " [Expected: 3.12]" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "Test: " << endl;
	cout << "\t" << "s.setUnitsCompleted(18.2)" << endl;
    s.setUnitsCompleted(18.2);
	cout << "Output: " << endl;
	cout << "\t" << s.getUnitsCompleted() << " [Expected: 18.2]" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "Test: " << endl;
	cout << "\t" << "s.setFullTimeStatus(true)" << endl;
    s.setFullTimeStatus(true);
	cout << "Output: " << endl;
	cout << "\t" << s.isFullTime() << " [Expected: 1]" << endl;

	cout << "-------------------------------------------" << endl;

	 return 0;
}
