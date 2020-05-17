/*  Date.h
 *  Created on: Apr 21, 2019
 *  Author: ayesha_khan
 */

#ifndef DATE_H_
#define DATE_H_
#include<cstring>
#include<sstream>
using namespace std;


class Date
{

protected:
	int day;
	int month;
	int year;

public:
	Date();
	Date(int d, int m, int y);
	Date(const Date &d);
	int getDay() const;
	void setDay(int d);
	int getMonth() const;
	void setMonth(int m);
	int getYear() const;
	void setYear(int y);
	string getDate();
	virtual ~Date();
};



#endif /* DATE_H_ */
