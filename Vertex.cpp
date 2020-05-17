/*
 *  Vertex.cpp
 *  Created on: Apr 21, 2019
 *  Author: ayesha_khan
 */

#include "Vertex.h"

namespace std {

Vertex::Vertex() {
	// TODO Auto-generated constructor stub
	srand(time(NULL));
	x = 0 + rand() % 100;
	y = 0 + rand() % 100;
}
Vertex::Vertex(int x_coord, int y_coord)
{
	x = x_coord;
	y = y_coord;
}

Vertex::Vertex(Vertex &v)
{
	x = v.x;
	y = v.y;
}

int Vertex::getX() const {
	return x;
}

void Vertex::setX(int x) {
	this->x = x;
}

int Vertex::getY() const {
	return y;
}

void Vertex::setY(int y) {
	this->y = y;
}
Vertex Vertex::operator = (const Vertex &rhs)
{
	this->x = rhs.getX();
	this->y = rhs.getY();
	return *this;
}
string Vertex::stringRep()
{
	string output, a, b;
	stringstream s1, s2;
	int i;
	i = x;
	s1 << i;
	a = s1.str();
	a = "x=" + a;
	i = y;
	s2 << i;
	b = s2.str();
	b = "y=" + b;
	return a + "," + b;
}
Vertex::~Vertex() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
