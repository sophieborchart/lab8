#include Student.h
#include Person.h
using namespace std;


int main() {
	Person p();
	Student s();
	cout << "Person p; " << p << endl;

	cout << "-------------------------------------------" << endl;

	cout << "Testing Person setters/getters:" << endl;

	cout << "-------------------------------------------" << endl;

    cout << "p.setFirstName(\"Sophie\")" << endl;
    p.setFirstName("Sophie");
	cout << p.getFirstName() << "[Expected: Sophie]" << endl;

	cout << "-------------------------------------------" << endl;

	p.setLastName("Borchart");
	cout << "p.setLastName(\"Borchart\")" << endl;
	cout << p.getLastName() << "[Expected: Borchart]" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "p.setDateOfBirth(4, 7, (2018-1900))" << endl;
	p.setDateOfBirth(4, 7, (1998-1900));
	cout << p.getDateOfBirth() << "[Expected: 4/7/1998]" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "p.setAddress(\"28 Westhampton Way\")" << endl;
	p.setAddress(\"28 Westhampton Way");
	cout << p.getAddress() << "[Expected: 28 Westhampton Way]" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "p.setNetID(\"sb3jm\")" << endl;
	p.setNetID("sb3jm");
	cout << p.getNetID() << "[Expected: sb3jm]" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "p.setURID(12345678)" << endl;
	p.setURID(12345678);
	cout << p.setURID() << "[Expected: 12345678]" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "p.setEmail(\"sophie.borchart@richmond.edu\")" << endl;
	p.setEmail("sophie.borchart@richmond.edu");
	cout << p.getEmail() << "[Expected: sophie.borchart@richmond.edu]" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "p.setPhone(8478571058)" << endl;
	p.setPhone(8478571058);
	cout << p.getPhone() << "[Expected: 8478571058]" << endl;

	cout << "*******************************************" << endl;


	cout << "Student s; " << s << endl;

	cout << "-------------------------------------------" << endl;

	cout << "Testing Student setters/getters:" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "s.addCourse(\"CMSC 240\")" << endl;
	cout << "s.addCourse(\"CMSC 222\")" << endl;
    s.addCourse("CMSC 240");
    s.addCouurse("CMSC 222");
	cout << s.getCourses() << "[Expected: CMSC 240, CMSC 222]" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "s.removeCourse(\"CMSC 240\")" << endl;
    s.removeCourse("CMSC 240");
	cout << s.getCourses() << "[Expected: CMSC 222]" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "s.printCourses()" << endl;
	s.printCourses();
	cout << "[Expected: CMSC 222]" << endl;


	cout << "-------------------------------------------" << endl;

	cout << "s.setCourses(\"CMSC 301, CMSC 315, MATH 245\")" << endl;
    s.setCourses("CMSC 301, CMSC 315, MATH 245");
	cout << s.getCourses() << "[Expected: CMSC 301, CMSC 315, MATH 245]" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "s.clearCourses()" << endl;
    s.clearCourses();
	cout << s.clearCourses() << "[Expected: ]" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "s.setAdmitDate(\"4/2/2017\")" << endl;
    s.setAdmitDate("4/2/2017");
	cout << s.getAdmitDate() << "[Expected: 4/2/2017]" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "s.setSchool(University of Richmond)" << endl;
    s.setSchool(University of Richmond);
	cout << s.getSchool() << "[Expected: University of Richmond]" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "s.setGPA(3.12)" << endl;
    s.setGPA(3.12);
	cout << s.getGPA() << "[Expected: 3.12]" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "s.setUnitsCompleted(18.0)" << endl;
    s.setUnitsCompleted(18.0);
	cout << s.getUnitsCompleted() << "[Expected: 18.0]" << endl;

	cout << "-------------------------------------------" << endl;

	cout << "s.setFullTimeStatus(true)" << endl;
    s.setFullTimeStatus(true);
	cout << s.getFullTimeStatus() << "[Expected: true]" << endl;

	cout << "-------------------------------------------" << endl;


}