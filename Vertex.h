/*
 *  Vertex.h
 *  Created on: Apr 21, 2019
 *  Author: ayesha_khan
 */

#ifndef VERTEX_H_
#define VERTEX_H_
#include <string>
#include<sstream>
#include <cstdlib>

namespace std {

class Vertex
{
protected:
	int x;
	int y;

public:
	Vertex();
	Vertex(int x_coord, int y_coord);
	Vertex(Vertex &v);
	string stringRep();
	virtual ~Vertex();
	int getX() const;
	void setX(int x);
	int getY() const;
	void setY(int y);
	Vertex operator = (const Vertex &rhs);
};

} /* namespace std */

#endif /* VERTEX_H_ */
