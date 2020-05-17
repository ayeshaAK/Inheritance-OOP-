/*
 * 	DateTime.cpp
 *  Created on: Apr 21, 2019
 *  Author: ayesha_khan
 */

#include "DateTime.h"

namespace std {

DateTime::DateTime() {
	// TODO Auto-generated constructor stub
	a.setDay(0);
	a.setMonth(0);
	a.setYear(0);
	b.setH(0);
	b.setM(0);
	b.setS(0);
}
DateTime::DateTime(int day, int month, int year, int hours,int mins,int sec) {
	// TODO Auto-generated constructor stub
	a.setDay(day);
	a.setMonth(month);
	a.setYear(year);
	b.setH(hours);
	b.setM(mins);
	b.setS(sec);
}
const Date& DateTime::getA() const {
	return a;
}

void DateTime::setA(const Date& a) {
	this->a = a;
}

const Time& DateTime::getB() const {
	return b;
}

void DateTime::setB(const Time& b) {
	this->b = b;
}

string DateTime::getDT(){

	return a.getDate() + " " + b.getTime();

}
DateTime::~DateTime() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
