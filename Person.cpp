#ifndef __PERSON_CPP__
#define __PERSON_CPP__

#include <string>
#include <ctime>
#include "Person.h"

Person::Person()
{
}

Person::Person(const Person& other)
{
}

Person::Person(int urid, std::string netid, std::string lname, std::string fname,
       int dob_day, int dob_month, int dob_year,
       std::string email, std::string address, long phone)
{

}

Person::~Person(){}

std::string Person::getFirstName()
{
  return "STUB"; //stub
}

std::string Person::getLastName()
{
  return "STUB"; //stub
}

struct tm Person::getDateOfBirth()
{
  return null; //stub
}

std::string Person::getAddress()
{
  return "STUB"; //stub
}

std::string getNetId()
{
  return "STUB"; //stub
}

int Person::getURID()
{
  return -1; //stub
}

std::string Person::getEmail();
{
  return "STUB"; //stub
}

long Person::getPhone()
{
  return -1; //stub
}

void Person::setFirstName(std::string fname)
{
}

void Person::setLastName(std::string lname)
{
}

void Person::setDateOfBirth(int day, int month, int year)
{
}

void Person::setAddress(std::string address)
{
}

void Person::setNetID(std::string netid)
{
}

void Person::setURID(int urid)
{
}

void Person::setEmail(std::string email)
{
}

void Person::setPhone(long number)
{
}


#endif
