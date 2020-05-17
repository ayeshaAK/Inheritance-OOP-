/*
 * Employee.cpp
 *
 *  Created on: Apr 21, 2019
 *      Author: ayesha_khan
 */

#include "Employee.h"

namespace std {

Employee::Employee() {
	// TODO Auto-generated constructor stub
	EmployeeNum = 0;
	HiredDate.setDay(0);
	HiredDate.setMonth(0);
	HiredDate.setYear(0);
}
Employee::Employee(int num, Date d) {
	// TODO Auto-generated constructor stub
	EmployeeNum = num;
	HiredDate = d;
}
int Employee::getEmployeeNum() const {
	return EmployeeNum;
}

void Employee::setEmployeeNum(int employeeNum) {
	EmployeeNum = employeeNum;
}
const Date& Employee::getHiredDate() const {
	return HiredDate;
}

void Employee::setHiredDate(Date& hiredDate) {
	HiredDate.setDay(hiredDate.getDay());
	HiredDate.setMonth(hiredDate.getMonth());
	HiredDate.setYear(hiredDate.getYear());
}
int Employee::getHDateDay()
{
	return HiredDate.getDay();
}
int Employee::getHDateMonth()
{
	return HiredDate.getMonth();
}
int Employee::getHDateYear()
{
	return HiredDate.getYear();
}
string Employee::stringhdate()
{
	return HiredDate.getDate();
}
Employee::~Employee() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
