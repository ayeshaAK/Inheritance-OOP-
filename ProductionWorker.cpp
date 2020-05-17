/*
 *  ProductionWorker.cpp
 *  Created on: Apr 21, 2019
 *  Author: ayesha_khan
 */

#include "ProductionWorker.h"

namespace std {

ProductionWorker::ProductionWorker() {
	// TODO Auto-generated constructor stub
	//shift: 1 represents daytime, 0 represents night time
	shift = 1;
	hprate = 0.0;
}
ProductionWorker::ProductionWorker(int s,double hpr) {
	// TODO Auto-generated constructor stub
	//shift: 1 represents daytime, 0 represents night time
	if(s>1)
	{
		shift = 1;
	}
	else if(s<0)
	{
		shift = 0;
	}
	else
	{
		shift =s;
	}
	hprate = hpr;
}
double ProductionWorker::getHprate() const {
	return hprate;
}

void ProductionWorker::setHprate(double hprate) {
	this->hprate = hprate;
}

int ProductionWorker::getShift() const {
	return shift;
}

void ProductionWorker::setShift(int shift) {
	this->shift = shift;
}

ProductionWorker::~ProductionWorker() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
