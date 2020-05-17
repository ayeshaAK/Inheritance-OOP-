/*
 *  DateTime.h
 *  Created on: Apr 21, 2019
 *  Author: ayesha_khan
 */

#ifndef DATETIME_H_
#define DATETIME_H_
/*#include"Date.cpp"
#include"Time.cpp"*/

namespace std {

class DateTime : public Date , public Time
{
	Date a;
	Time b;

public:
	DateTime();
	DateTime(int day, int month, int year, int hours,int mins,int sec);
	virtual ~DateTime();
	const Date& getA() const;
	void setA(const Date& a);
	const Time& getB() const;
	void setB(const Time& b);
	string getDT();
};

} /* namespace std */

#endif /* DATETIME_H_ */
