/*
 * Person.h
 *
 *  Created on: Apr 21, 2019
 *      Author: ayesha_khan
 */

#ifndef PERSON_H_
#define PERSON_H_
#include <string>

namespace std {

class Person
{

protected:
	string name;
	string address;

public:
	Person();
	Person(string n, string add);
	virtual ~Person();
	const string& getAddress() const;
	void setAddress(const string& address);
	const string& getName() const;
	void setName(const string& name);
};

} /* namespace std */

#endif /* PERSON_H_ */
