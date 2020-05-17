/*
 * ProductionWorker.h
 * Created on: Apr 21, 2019
 * Author: ayesha_khan
 */

#ifndef PRODUCTIONWORKER_H_
#define PRODUCTIONWORKER_H_

namespace std {

class ProductionWorker : public Employee
{

protected:
	int shift;
	double hprate;

public:
	ProductionWorker();
	ProductionWorker(int s, double hpr);
	virtual ~ProductionWorker();
	double getHprate() const;
	void setHprate(double hprate);
	int getShift() const;
	void setShift(int shift);
};

} /* namespace std */

#endif /* PRODUCTIONWORKER_H_ */
