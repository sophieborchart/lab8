#ifndef __PERSON_CPP__
#define __PERSON_CPP__

#include <string>
#include <ctime>
#include "Person.h"

Person::Person()
{
  urid = -1;
  netid = "";
  lname = "";
  fname = "";
  dob_day = -1;
  dob_month = -1;
  dob_year = -1;
  email = "";
  address = "";
  phone = -1;
}

Person::Person(const Person& other)
{
  urid = other.urid;
  netid = other.netid;
  lname = other.lname;
  fname = other.fname;
  dob_day = other.dob_day;
  dob_month = other.dob_month;
  dob_year = other.dob_year;
  email = other.email;
  address = other.address;
  phone = other.phone;
}

Person::Person(int urid, std::string netid, std::string lname, std::string fname,
       int dob_day, int dob_month, int dob_year,
       std::string email, std::string address, long phone)
{
  this->urid = urid;
  this->netid = netid;
  this->lname = lname;
  this->fname = fname;
  this->dob_day = dob_day;
  this->dob_month = dob_month;
  this->dob_year = dob_year;
  this->email = email;
  this->address = address;
  this->phone = phone;
}

Person::~Person(){}

std::string Person::getFirstName()
{
  return fname;
}

std::string Person::getLastName()
{
  return lname;
}

struct tm Person::getDateOfBirth()
{
  struct tm birthInformation;
  birthInformation.tm_mday = dob_day;
  birthInformation.tm_mon = dob_month;
  birthInformation.tm_year = dob_year;
  return birthInformation;
}

std::string Person::getAddress()
{
  return address;
}

std::string Person::getNetID()
{
  return netid;
}

int Person::getURID()
{
  return urid;
}

std::string Person::getEmail()
{
  return email;
}

long Person::getPhone()
{
  return phone;
}

void Person::setFirstName(std::string fname)
{
  this->fname = fname;
}

void Person::setLastName(std::string lname)
{
  this->lname = lname;
}

void Person::setDateOfBirth(int day, int month, int year)
{
  this->dob_day = day;
  this->dob_month = month;
  this->dob_year = year;
}

void Person::setAddress(std::string address)
{
  this->address = address;
}

void Person::setNetID(std::string netid)
{
  this->netid = netid;
}

void Person::setURID(int urid)
{
  this->urid = urid;
}

void Person::setEmail(std::string email)
{
  this->email = email;
}

void Person::setPhone(long number)
{
  this->phone = number;
}


#endif
