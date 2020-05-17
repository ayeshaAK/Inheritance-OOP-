/*
 *  SegList.h
 *  Created on: Apr 21, 2019
 *  Author: ayesha_khan
 */

#ifndef SEGLIST_H_
#define SEGLIST_H_
//#include "Vertex.cpp"

namespace std {

class SegList : public Vertex
{
public:
	int size;
	Vertex *arr;
	SegList();
	SegList(SegList &s);
	void addVertex(Vertex v);
	virtual string getSpec();
	virtual ~SegList();
	Vertex*const getArr();
	void setArr(Vertex*& arr);
	int getSize() const;
	void setSize(int s);
};

} /* namespace std */

#endif /* SEGLIST_H_ */
