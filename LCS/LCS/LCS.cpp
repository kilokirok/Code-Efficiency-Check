#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

string q[99][99];

int r[99][99];


void inputlength(string x, string y) {

    int w = x.length();
    int e = y.length();

    for (int a = 1; a <= w; a++) {

        r[a][0] = 0;

    }

    for (int s = 0; s <= e; s++) {

        r[0][s] = 0;

    }

    for (int a = 1; a <= w; a++) {

        for (int s = 1; s <= e; s++) {

            if (x[a - 1] == y[s - 1]) {

                r[a][s] = r[a - 1][s - 1] + 1;
                q[a][s] = "upperleft";

            }

            else if (r[a - 1][s] >= r[a][s - 1]) {

                r[a][s] = r[a - 1][s];
                q[a][s] = "upper";

            }

            else {

                r[a][s] = r[a][s - 1];
                q[a][s] = "left";

            }

        }

    }

}

void print(string x, int a, int s) {

    if (a == 0 || s == 0) {

        return;

    }

    if (q[a][s] == "upperleft") {

        print(x, a - 1, s - 1);
        cout << x[a - 1];

    }

    else if (q[a][s] == "upper") {

        print(x, a - 1, s);

    }

    else {

        print(x, a, s - 1);

    }
}

int main(int argc, char** argv)
{
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

    string X;
    getline(file, X);
    cout << "String X: " << X << endl;

    string Y;
    getline(file, Y);
    cout << "String Y: " << Y << endl;

    cout << "LCS: ";

    inputlength(X, Y);
    print(X, X.length(), Y.length());
}