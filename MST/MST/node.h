#pragma once

#include <string>
#include <vector>

using namespace std;

class edge;

class node{

public:

	char lab;
	bool visited;
	vector<edge*> nbr;

	node(char);
	void addNeighbor(edge*);

};

