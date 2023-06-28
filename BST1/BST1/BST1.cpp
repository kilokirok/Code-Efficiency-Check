#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "Nodes.h"

using namespace std;

Nodes* rt;

//BST program
void treein(Nodes*& rt, Nodes* w) {

    Nodes* x = rt;
    Nodes* y = nullptr;

    while (x != nullptr) {

        y = x;

        if (w->keynumber < x->keynumber) {

            x = x->left;

        }

        else {

            x = x->right;

        }

    }

    if (y == nullptr) {

        rt = w;

    }
    else if (w->keynumber < y->keynumber) {

        y->left = w;

    }
    else {

        y->right = w;

    }
}

Nodes* iterTS(Nodes* x, int q) {

    while (x != nullptr && q != x->keynumber) {

        cout << x->keynumber << " ";

        if (q < x->keynumber) {

            x = x->left;

        }

        else {

            x = x->right;

        }
    }

    if (x != NULL) {

        cout << x->keynumber << " ";
        cout << " : found";

    }

    else if (x == NULL) {

        cout << " : not found";

    }

    return x;

}

void clr(Nodes*& j) {

    if (j != nullptr) {

        clr(j->left);
        clr(j->right);
        delete j;
        j = NULL;

    }
}

void preodr(Nodes*& j) {

    if (j != nullptr) {

        cout << j->keynumber << " ";
        preodr(j->left);
        preodr(j->right);

    }
}

void inodr(Nodes*& j) {

    if (j != nullptr) {

        inodr(j->left);
        cout << j->keynumber << " ";
        inodr(j->right);

    }
}

void postodr(Nodes*& j) {

    if (j != nullptr) {

        postodr(j->left);
        postodr(j->right);
        cout << j->keynumber << " ";

    }
}



int main(int argc, char** argv)
{
    Nodes* rt = nullptr;

    // error checking
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

    //Get the number fromt the first line
    string e;
    getline(file, e);
    int j = stoi(e);


    //Read instruction and print

    for (int i = 0; i < j; i++) {

        string cmd;
        file >> cmd;

        if (cmd == "ADD") {

            string q;
            file >> q;
            Nodes* w = new Nodes(stoi(q));
            treein(rt, w);
            cout << "Adding " << q << endl;

        }

        else if (cmd == "FIND") {

            string kk;
            file >> kk;
            cout << "Looking for " << kk << "... ";
            iterTS(rt, stoi(kk));
            cout << endl;

        }

        else if (cmd == "CLEAR") {

            clr(rt);
            cout << "(tree deleted!)" << endl;

        }

        else if (cmd == "PREORDER") {

            cout << "PREORDER: ";
            preodr(rt);
            cout << endl;

        }

        else if (cmd == "INORDER") {

            cout << "INORDER: ";
            inodr(rt);
            cout << endl;

        }

        else if (cmd == "POSTORDER") {

            cout << "POSTORDER: ";
            postodr(rt);
            cout << endl;

        }

    }
}