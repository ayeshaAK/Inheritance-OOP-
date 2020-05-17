/*
 * Square.cpp
 *
 *  Created on: Apr 22, 2019
 *      Author: ayesha_khan
 */

#include "Square.h"

namespace std {

Square::Square(Vertex v1, Vertex v2, Vertex v3, Vertex v4) {
	// TODO Auto-generated constructor stub
	addVertex(v1);
	addVertex(v2);
	addVertex(v3);
	addVertex(v4);
}
string Square::getSpec()
{
	string output = "type=triangle,";
	for(int i=0; i< size-1; i++)
	{
		output = output + arr[i].stringRep() + "," ;
	}
	output = output + arr[size-1].stringRep();
	return output;
}
Square::~Square() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
