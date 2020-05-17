/*
 * Square.h
 *
 *  Created on: Apr 22, 2019
 *      Author: ayesha_khan
 */

#ifndef SQUARE_H_
#define SQUARE_H_
//#include "SegList.cpp"

namespace std {

class Square : public SegList{
public:
	Square(Vertex v1, Vertex v2, Vertex v3, Vertex v4);
	virtual string getSpec();
	virtual ~Square();
};

} /* namespace std */

#endif /* SQUARE_H_ */
