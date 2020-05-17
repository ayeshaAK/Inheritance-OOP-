//============================================================================
// Name        : inheritance.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Triangle.cpp"
using namespace std;

int main() {
	Vertex a1(1,0);
	Vertex a2(10,0);
	Vertex a3(5,5);
	Triangle t(a1,a2,a3);
	cout << t.getSpec() << endl;
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;

}

