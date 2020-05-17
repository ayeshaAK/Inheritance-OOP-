/*
 * Time.cpp
 * Created on: Apr 21, 2019
 * Author: ayesha_khan
 */

#include "Time.h"

namespace std {

Time::Time() {
	// TODO Auto-generated constructor stub
	h = 0;
	m = 0;
	s = 0;
}

Time::Time(int hours, int minutes, int seconds) {
	// TODO Auto-generated constructor stub
	if( hours >= 0 && hours <=24 )
	{
		h = hours;
	}
	else if ( hours > 24 )
	{
		int a,b;
		a = hours / 24;
		h = -1;
	}
	else
	{
		hours = 0;
	}
	if( minutes >= 0 && minutes < 60 )
	{
		m = minutes;
	}
	else if ( minutes > 59  )
	{
		int a,b;
		a = minutes / 59;
		b = minutes % 59;
		h = h + a;
		m = b;
	}
	else
	{
		minutes = 0;
	}
	if( seconds >= 0 && seconds < 60 )
	{
		s = seconds;
	}
	else if ( seconds > 59 )
	{
		int a,b;
		a = seconds / 59;
		b = seconds % 59;
		m = m + a;
		s = b;
	}
	else
	{
		s = 0;
	}

}
int Time::getH() const {
	return h;
}

void Time::setH(int h) {
	this->h = h;
}

int Time::getM() const {
	return m;
}

void Time::setM(int m) {
	this->m = m;
}

int Time::getS() const {
	return s;
}

void Time::setS(int s) {
	this->s = s;
}

string Time::getTime(){
	string output,b,c;
	stringstream s1, s2, s3;
	int i;
	i = this->getH();
	s1 << i;
	output = s1.str();
	output = output + ":";
	i = this->getM();
	s2 << i;
	b = s2.str();
	output = output + b + ":";
	i = this->getS();
	s3 << i;
	c = s3.str();
	output  = output + c;
	return output;
}

Time::~Time() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
