/*
 *  Employee.h
 *  Created on: Apr 21, 2019
 *  Author: ayesha_khan
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

namespace std {

class Employee : public Person , public Date
{

protected:
	int EmployeeNum;
	Date HiredDate;

public:
	Employee();
	Employee(int num, Date d);
	virtual ~Employee();
	int getEmployeeNum() const;
	void setEmployeeNum(int employeeNum);
	const Date& getHiredDate() const;
	void setHiredDate( Date& hiredDate);
	int getHDateDay();
	int getHDateMonth();
	int getHDateYear();
	string stringhdate();

};

} /* namespace std */

#endif /* EMPLOYEE_H_ */
