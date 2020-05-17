/*
 *  SegList.cpp
 *  Created on: Apr 21, 2019
 *  Author: ayesha_khan
 */

#include "SegList.h"

namespace std {

SegList::SegList() {
	// TODO Auto-generated constructor stub
	size = 0;
	arr = new Vertex[10];
}

SegList::SegList(SegList &s)
{
	// TODO Auto-generated constructor stub
	size = s.getSize();
	arr = new Vertex[10];
	for(int i=0; i<size; i++)
	{
		arr[i] = s.arr[i];

	}
}
Vertex*const SegList::getArr() {
	return arr;
}

void SegList::setArr( Vertex*& arr) {
	this->arr = arr;
}

int SegList::getSize() const {
	return size;
}

void SegList::setSize(int s)  {
	size = s;
}
void SegList::addVertex(Vertex v)
{
	if( size == 10 )
	{
		return;
	}
	else
	{
		arr[size] = v;
		size++;
	}
}
string SegList::getSpec()
{
	string output;
	for(int i=0; i< size-1; i++)
	{
		output = output + arr[i].stringRep() + "," ;
	}
	output = output + arr[size-1].stringRep();
	return output;
}
SegList::~SegList() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
