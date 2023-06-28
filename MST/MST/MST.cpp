#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>
#include "node.h"
#include "edge.h"

using namespace std;

vector<edge*> buck;

//Choosing best edge
edge* findingBestEdge() {

    edge* best = NULL;

    while (best == NULL && !buck.empty()) {

        best = buck[0];

        if (best != NULL) {

            int bind = 0;

            for (int i = 1; i < buck.size(); i++) {

                edge* e = buck[i];

                if (e -> weight < best -> weight) {

                    best = e;
                    bind = i;

                }
            }

            if (best -> n1 -> visited && best -> n2 -> visited) {

                buck.erase(buck.begin() + bind);
                best = NULL;

            }
        }
    }

    return best;

}

//Calculate minimum weight
void prim(node* START) {

    vector<edge*> edges;
    int mw = 0;

    for (edge* s : START -> nbr) {

        buck.push_back(s);

    }

    edge* d = findingBestEdge();

    while (d != NULL) {

        node* n1 = d -> n1;
        node* n2 = d -> n2;

        n1 -> visited = true;
        n2 -> visited = true;

        mw += d -> weight;

        edges.push_back(d);

        for (edge* s : n1 -> nbr) {
            buck.push_back(s);
        }

        for (edge* s : n2 -> nbr) {
            buck.push_back(s);
        }

        d = findingBestEdge();

    }

    //printing part
    cout << "MST has a w of " << mw << " and consists of these edges:" << endl;


    for (int i = 0; i < edges.size(); i++) {

        cout << edges[i] -> n1 -> lab << " - " << edges[i] -> n2 -> lab << endl;

    }
}

//Runing part
int main(int argc, char** argv) {

    map<char, node*> nodes;
    vector<edge*> edges;

    // input error checking
    if (argc == 1) {

        cout << "File input error" << endl;

        return 1;

    }

    ifstream file;
    file.open(argv[1], ios::in);

    if (!file) {

        cout << "Can not find the file" << argv[1] << endl;
        return 1;

    }

    string t;
    int n;

    getline(file, t);

    for (char a : t) {

        nodes[a] = new node(a);

    }

    getline(file, t);
    n = stoi(t);

    for (int i = 0; i < n; i++) {

        string n1, n2;
        int w;

        getline(file, n1, ' ');
        getline(file, n2, ' ');
        getline(file, t);

        w = stoi(t);

        node* q = nodes[n1[0]];
        node* e = nodes[n2[0]];
        edge* r = new edge(q, e, w);

        edges.push_back(r);
        q->addNeighbor(r);
        e->addNeighbor(r);

    }

    prim(nodes['A']);

}