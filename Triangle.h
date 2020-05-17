/*
 * Triangle.h
 *
 *  Created on: Apr 22, 2019
 *      Author: ayesha_khan
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_
//#include "SegList.cpp"

namespace std {

class Triangle : public SegList{
public:
	Triangle(Vertex v1, Vertex v2, Vertex v3);
	virtual string getSpec();
	virtual ~Triangle();
};

} /* namespace std */

#endif /* TRIANGLE_H_ */
