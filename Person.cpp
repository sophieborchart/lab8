// Names: Sophie Borchart and Matthew Johnson

#ifndef __PERSON_CPP__
#define __PERSON_CPP__

#include <string>
#include <ctime>
#include "Person.h"

Person::Person() : urid(0000), netid(" "), lname("xyz"), fname("abc"), dob_day(0), dob_month(1), dob_year(0), 
email("x@y.edu"), address("x address"), phone(12345654){}


// destructor
Person::~Person(){}

Person::Person(const Person& other):
urid(other.urid), netid(other.netid), lname(other.lname), fname(other.fname), dob_day(other.dob_day),
dob_month(other.dob_month), dob_year(other.dob_year), email(other.email), address(other.address), phone(other.phone){}

Person::Person(int urid, std::string netid, std::string lname, std::string fname, int dob_day, int dob_month, 
  int dob_year, std::string email, std::string address, long phone):


urid(urid), netid(netid), lname(lname), fname(fname), dob_day(dob_day), dob_month(dob_month), dob_year(dob_year),
email(email), address(address), phone(phone){}


std::string Person::getFirstName()
// gets the first name
{
  return fname;
}

std::string Person::getLastName()
// gets the last name
{
  return lname;
}

struct tm Person::getDateOfBirth()
// gets the struct representing the date of birth
{
  struct tm birthInformation;
  birthInformation.tm_mday = dob_day;
  birthInformation.tm_mon = dob_month;
  birthInformation.tm_year = dob_year - 1900;
  return birthInformation;
}

std::string Person::getAddress()
// gets the address
{
  return address;
}

std::string Person::getNetID()
// gets the netID
{
  return netid;
}

int Person::getURID()
// gets the UR ID
{
  return urid;
}

std::string Person::getEmail()
// gets the email
{
  return email;
}

long Person::getPhone()
// gets the phone number
{
  return phone;
}

void Person::setFirstName(std::string fname)
// setter method for the first name
{
  this->fname = fname;
}

void Person::setLastName(std::string lname)
// setter method for the last name
{
  this->lname = lname;
}

void Person::setDateOfBirth(int day, int month, int year)
// setter method for the last name
{
  this->dob_day = day;
  this->dob_month = month;
  this->dob_year = year + 1900;
}

void Person::setAddress(std::string address)
// setter method for the address
{
  this->address = address;
}

void Person::setNetID(std::string netid)
// setter method for the netID
{
  this->netid = netid;
}

void Person::setURID(int urid)
// setter method for the UR ID
{
  this->urid = urid;
}

void Person::setEmail(std::string email)
// setter method for the email
{
  this->email = email;
}

void Person::setPhone(long number)
// setter method for the phone number
{
  this->phone = number;
}


#endif
