/*
 *  Time.h
 *  Created on: Apr 21, 2019
 *  Author: ayesha_khan
 */

#ifndef TIME_H_
#define TIME_H_
#include<string>
#include<sstream>

namespace std {

class Time
{

protected:
	int h;
	int m;
	int s;

public:
	Time();
	Time(int hours, int minutes, int seconds);
	virtual ~Time();
	int getH() const;
	void setH(int h);
	int getM() const;
	void setM(int m);
	int getS() const;
	void setS(int s);
	string getTime();
};

} /* namespace std */

#endif /* TIME_H_ */
