/*
 *  TeamLeader.h
 *  Created on: Apr 21, 2019
 *  Author: ayesha_khan
 */

#ifndef TEAMLEADER_H_
#define TEAMLEADER_H_

namespace std {

class TeamLeader : public ProductionWorker
{
protected:
	ProductionWorker r;
	int bonus;
	int fixedtrainyh;
	int emptrainyh;

public:
	TeamLeader(string n, string add, int enumber,Date d1, int shft, double hpr, int b);
	int getBonus() const;
	void setBonus(int bonus);
	int getEmptrainyh() const;
	void setEmptrainyh(int emptrainyh);
	int getFixedtrainyh() const;
	void setFixedtrainyh(int fixedtrainyh);
	const ProductionWorker& getR() const;
	void setR(const ProductionWorker& r);
	int calculateSalary(Date d);
	virtual ~TeamLeader();
};

} /* namespace std */

#endif /* TEAMLEADER_H_ */
