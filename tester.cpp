#include Student.h
#include Person.h
using namespace std;


int main() {
	Person p();
	Student s();
	cout << "Person p; " << p << endl;

	cout << "-------------------------------------------" << endl;

	cout << "Student s; " << s << endl;

	cout << "-------------------------------------------" << endl;

	cout << "Testing setters/getters:" << endl;

	cout << "-------------------------------------------" << endl;

    cout << "p.setFirstName(\"Sophie\")" << endl;
    p.setFirstName("Sophie");
	cout << p.getFirstName() << endl;

	cout << "-------------------------------------------" << endl;

	p.setLastName("Borchart");
	cout << "p.setLastName(\"Borchart\")" << endl;
	cout << p.getLastName() << endl;

	cout << "-------------------------------------------" << endl;

	cout << "p.setDateOfBirth(4, 7, (2018-1900))" << endl;
	cout << p.getDateOfBirth() << endl;
	p.setDateOfBirth(4, 7, (2018-1900));

	cout << "-------------------------------------------" << endl;

	cout << "p.setAddress(\"28 Westhampton Way\")" << endl;
	cout << p.getAddress() << endl;

	cout << "-------------------------------------------" << endl;

	cout << "p.setNetID(\"sb3jm\")" << endl;
	cout << p.getNetID() << endl;

	cout << "-------------------------------------------" << endl;

	cout << "p.setURID(12345678)" << endl;
	cout << p.setURID() << endl;

	cout << "-------------------------------------------" << endl;

	cout << "p.setEmail(\"sophie.borchart@richmond.edu\")" << endl;
	cout << p.getEmail() << endl;

	cout << "-------------------------------------------" << endl;

	cout << "p.setPhone(8478571058)" << endl;
	cout << p.getPhone() << endl;

	cout << "-------------------------------------------" << endl;


}