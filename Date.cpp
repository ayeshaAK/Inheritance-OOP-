/*
 * Date.cpp
 * Created on: Apr 21, 2019
 * Author: ayesha_khan
 */
#include "Date.h"

Date::Date()
{
	// TODO Auto-generated constructor stub
	day = 0;
	month = 0;
	year = 0;
}
Date::Date(int d, int m, int y)
{
	// TODO Auto-generated constructor stub
	if( d >= 0 && d<32)
	{
		day = d;
	}
	else
	{
		day =  0;
	}
	if( m >= 0 && m<13)
	{
		month = m;
	}
	else
	{
		month = 0;
	}
	if( y >= 0)
	{
		year = y;
	}
	else
	{
		year = 0;
	}
}
Date::Date(const Date &d )
{
	// TODO Auto-generated constructor stub
	day = d.day;
	month = d.month;
	year = d.year;
}
int Date::getDay() const {
	return day;
}

void Date::setDay(int d) {
	this->day = d;
}

int Date::getMonth() const {
	return month;
}

void Date::setMonth(int m) {
	this->month = m;
}

int Date::getYear() const {
	return year;
}

void Date::setYear(int y) {
	this->year = y;
}
string Date::getDate()
{
	string output,b,c;
	stringstream s1, s2, s3;
	int i;
	i = this->getDay();
	s1 << i;
	output = s1.str();
	output = output + "/";
	i = this->getMonth();
	s2 << i;
	b = s2.str();
	output = output + b + "/";
	i = this->getYear();
	s3 << i;
	c = s3.str();
	output  = output + c;
	return output;
}
Date::~Date() {
	// TODO Auto-generated destructor stub
}



