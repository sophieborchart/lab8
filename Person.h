#ifndef __PERSON_H__
#define __PERSON_H__

#include <string>
#include <ctime>

class Person
{
    protected:
        int urid;                 // the UR ID
        std::string netid;        // the netID
        std::string lname;        // the last name
        std::string fname;        // the first name
        int dob_day;              // the birthday
        int dob_month;            // the birth month
        int dob_year;             // the birth year
        std::string email;        // the email
        std::string address;      // the address
        long phone;               // the phone number

    public:
        Person();                 // default constructor for Person

        // constructor for Person which takes another Person as input
        Person(const Person& other);

        // constructor for Person where the user inputs values for all instance
        // variables
        Person(int urid, std::string netid, std::string lname, std::string fname,
               int dob_day, int dob_month, int dob_year,
               std::string email, std::string address, long phone);
        ~Person();                // destructor

        std::string  getFirstName();    // gets the first name
        std::string  getLastName();     // gets the last name

        // gets the struct representing the date of birth
        struct tm    getDateOfBirth();
        std::string  getAddress();      // gets the address
        std::string  getNetID();        // gets the netID
        int          getURID();         // gets the UR ID
        std::string  getEmail();        // gets the email
        long         getPhone();        // gets the phone number

        // setter method for the first name
        void setFirstName(std::string fname);

        // setter method for the last name
        void setLastName(std::string lname);

        // setter method for the last name
        void setDateOfBirth(int day, int month, int year);

        // setter method for the address
        void setAddress(std::string address);

        // setter method for the netID
        void setNetID(std::string netid);

        // setter method for the UR ID
        void setURID(int urid);

        // setter method for the email
        void setEmail(std::string email);

        // setter method for the phone number
        void setPhone(long number);
};

#endif
