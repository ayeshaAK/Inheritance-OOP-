/*
 *  TeamLeader.cpp
 *  Created on: Apr 21, 2019
 *  Author: ayesha_khan
 */

#include "TeamLeader.h"

namespace std {

TeamLeader::TeamLeader(string n, string add, int enumber, Date d1, int shft, double hpr, int b)
{
	// TODO Auto-generated constructor stub
	r.setName(n);
	r.setAddress(add);
	r.setEmployeeNum(enumber);
	r.setHiredDate(d1);
	r.setShift(shft);
	r.setHprate(hpr);
	fixedtrainyh = 8;
	emptrainyh = 0;
	bonus = b;
}

int TeamLeader::getBonus() const {
	return bonus;
}
void TeamLeader::setBonus(int bonus) {
	this->bonus = bonus;
}

int TeamLeader::getEmptrainyh() const {
	return emptrainyh;
}

void TeamLeader::setEmptrainyh(int emptrainyh) {
	this->emptrainyh = emptrainyh;
}

const ProductionWorker& TeamLeader::getR() const {
	return r;
}

void TeamLeader::setR(const ProductionWorker& r) {
	this->r = r;
}

int TeamLeader::calculateSalary(Date d){
	/*int a, b, c;
	if(r.getHDateDay() != d.getDay())
	{
		a = r.getHDateDay() - d.getDay();
		cout << a << endl;
		emptrainyh = emptrainyh + a;
	}
	else
	{
		emptrainyh = 1;
	}
	if(r.getHDateMonth() != d.getMonth())
	{
		b = r.getHDateMonth() - d.getMonth();
		b = b * 30;
		cout << b << endl;
		emptrainyh = emptrainyh + b;
	}
	if(r.getHDateYear() !=  d.getYear())
	{
		c = r.getHDateYear() - d.getYear();
		c = c * 365;
		cout << c << endl;
		emptrainyh = emptrainyh + c;
	}*/
	emptrainyh = d.getDay();
	return ((8 * emptrainyh) * r.getHprate()) + bonus;
}
TeamLeader::~TeamLeader() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
