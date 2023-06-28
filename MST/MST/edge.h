#pragma once
#include "node.h"

class edge{

public:

	node* n1;
	node* n2;
	int weight;

	edge(node*, node*, int);

};
