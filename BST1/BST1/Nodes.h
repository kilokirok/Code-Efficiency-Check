#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

class Nodes {

public:

	int keynumber;
	Nodes* left;
	Nodes* right;
	Nodes(int);

};

