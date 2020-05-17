/*
 * Triangle.cpp
 *
 *  Created on: Apr 22, 2019
 *      Author: ayesha_khan
 */

#include "Triangle.h"

namespace std {

Triangle::Triangle(Vertex v1,Vertex v2,Vertex v3) {
	// TODO Auto-generated constructor stub
	addVertex(v1);
	addVertex(v2);
	addVertex(v3);
}
string Triangle::getSpec()
{
	string output = "type=triangle,";
	for(int i=0; i< size-1; i++)
	{
		output = output + arr[i].stringRep() + "," ;
	}
	output = output + arr[size-1].stringRep();
	return output;
	//output = output + getArr()->stringRep();
	//return output;
}
Triangle::~Triangle() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
