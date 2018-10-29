// Names: Sophie Borchart and Matthew Johnson

#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <list>
#include "Person.h"

class Student : public Person
{
    public:
        // outside of this file, access type as Student::School,
        // and particular schools as Student::AS for example
        enum School {AS, JSLS, LAW, RSB, SPCS, UNDEFINED};

    protected:
        std::list<std::string> _courses;  // Student's courses
        double _gpa;                      // Student's gpa
        int urid;                         // Student's urid
        std::string netid;                // Student's netid
        std::string lname;                // Student's last name
        std::string fname;                // Student's first name
        std::string email;                // Student's email
        std::string address;              // Student's address
        long phone;                       // Student's phone number
        int day_admit;                    // Student's day of admission
        int month_admit;                  // Student's month of admission
        int year_admit;                   // Student's year of admission
        School _school;                   // Student's declared school
        bool is_full_time;                // Student's full time status
        double units_completed;           // Student's number of completed units


    public:                             // default constructor for Student
        Student();                      // explicitly call Person() on implementation
        Student(const Student& other);  // call Person(other) on implementation
        Student(int urid, std::string netid, std::string lname, std::string fname,
               int dob_day, int dob_mo, int dob_yr,
               std::string email, std::string address, long phone,
               int day_admit, int month_admit, int year_admit,
               School school, bool is_full_time,
               double units_completed);
        ~Student();

        std::list<std::string> getCourses();                                  // gets Student's courses
        void                   addCourse(std::string course);                 // adds a Student's course
        void                   removeCourse(std::string course);              // removes a Student's _course
        void                   printCourses();                                // prints a Student's course
        void                   setCourses(std::list<std::string> courses);    // sets a Student's courses
        void                   clearCourses();                                // clears a Student's courses
        struct tm              getAdmitDate();                                // struct for Student's admit date
        School                 getSchool();                                   // gets Student's school
        double                 getGPA();                                      // gets Student's GPA
        double                 getUnitsCompleted();                           // gets Student's number of units completed
        bool                   isFullTime();                                  // gets Student's full time status

        void setAdmitDate(int day, int month, int year);                      // sets Student's admit date
        void setSchool(School school);                                        // sets Student's school
        void setGPA(double gpa);                                              // sets Student's GPA
        void setUnitsCompleted(double units);                                 // sets Student' units completed
        void setFullTimeStatus(bool isFullTime);                              // sets Student's full time status
};

#endif
