#include "node.h"

node::node(char lb) {

	lab = lb;
	visited = false;

}

void node::addNeighbor(edge* edge) {

	nbr.push_back(edge);

}