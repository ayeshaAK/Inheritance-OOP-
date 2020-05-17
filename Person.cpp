/*
 * Person.cpp
 *
 *  Created on: Apr 21, 2019
 *      Author: ayesha_khan
 */

#include "Person.h"

namespace std {

Person::Person() {
	// TODO Auto-generated constructor stub
	name = " ";
	address = " ";
}
Person::Person( string n, string add ) {
	// TODO Auto-generated constructor stub
	name = n;
	address = add;
}
const string& Person::getAddress() const {
	return address;
}

void Person::setAddress(const string& address) {
	this->address = address;
}

const string& Person::getName() const {
	return name;
}

void Person::setName(const string& name) {
	this->name = name;
}

Person::~Person() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
