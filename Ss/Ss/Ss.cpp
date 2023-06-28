#include <iostream>
#include <fstream>
#include <vector>
#include "ep.h"
#include "searching.h"
#include "sp.h"


using namespace std;

int q;
int w;

int qr;

int hf(int sn) {


    return sn % q;

    //double c = (sqrt(5) - 1) / 2;
    //return q * fmod (sn * c, 1);

}

int stringToint(string name) {

    int sum = 0;

    for (char ch : name) {

        sum += (int)ch;

    }

    return sum;

}

int main(int argc, char** argv) {

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

    // first line/ f = m on the canvas
    string f;
    getline(file, f);
    q = stoi(f);

    // second line / s = n on the canvas
    string s;
    getline(file, s);
    w = stoi(s);

    vector <ep> data;
    vector <ep*> ros(q);
    vector <ep*>* dros = new vector <ep*>[q];

    int col = 0;

    for (int j = 0; j < w; j++) {

        string n;

        int id;
        string ids;

        int a;
        string ages;

        string jo;

        int y;
        string yrs;

        getline(file, n, '|');
        getline(file, ids, '|');
        getline(file, ages, '|');
        getline(file, jo, '|');
        getline(file, yrs);

        id = stoi(ids);
        a = stoi(ages);
        y = stoi(yrs);

        //instantiating
        ep* ifmz = new ep(n, id, a, jo, y);

        int sti = stringToint(n);
        int data = hf(sti);

        if (ros[data] == NULL) {
            ros[data] = ifmz;

            //cout << "Attempting to hash " << n;
            //cout << " at index " << data << "...SUCCESS!" << endl;

        } else {

            col++;
            //cout << "Attempting to hash" << n;
            //cout << " at index " << data << "...OUCH! Collision with ";
            //cout << ros[data]->name << endl;

        }

        vector<ep*> div = dros[data];
        int ds = div.size();
        div.push_back(ifmz);
        dros[data] = div;

        cout << "Adding " << n << " to table at index " << data;
        cout << " (" << ds << " collisions)" << endl;
 

    }

    string stars;
    getline(file, stars);

    string query;
    getline(file, query);
    qr = stoi(query);

    for (int j = 0; j < qr; j++) {

        string nam;
        getline(file, nam);
        int strtoint = stringToint(nam);
        int dataa = hf(strtoint);

        vector<ep*> div = dros[dataa];

        for (int k = 0; k < div.size(); k++) {

            ep* candi = div[k];

            if (candi -> name == nam) {

                col++;
                cout << "I found " << nam << " after" << k;
                cout << " collisions in the vector at index ";
                cout << dataa << " in my hashtable." << endl;

                cout << "COMPLETE RECORD: " << candi -> name;
                cout << "|" << candi -> ids << "|" << candi -> age;
                cout << "|" << candi -> job << "|" << candi -> yrs << endl;

            }
        }
    }

    cout << "Total collisions during lookup phase: " << col << endl;

    // sort & searching
   ////data finding
   // string sin;
   // getline(file, sin);
   // int q = stoi(sin);

 
   // vector<ep> data;

   // for (int i = 0; i < q; i++) {

   //     string n;

   //     int id;
   //     string ids;

   //     int a;
   //     string ages;

   //     string jo;

   //     int y;
   //     string yrs;

   //     getline(file, n, '|');
   //     getline(file, ids, '|');
   //     getline(file, ages, '|');
   //     getline(file, jo, '|');
   //     getline(file, yrs);

   //     id = stoi(ids);
   //     a = stoi(ages);
   //     y = stoi(yrs);


   //     ep info2(n, id, a, jo, y);
   //     data.push_back(info2);
   // }


    ofstream cf;
    cf.open("Hashtable.txt", ios::out);
    
    for (auto &con : data) {
        cf << con.varstostring() << endl;
    }
    
    cf.close();


    
    






    //Quick sorts
    //sp::qsort(data, 0, data.size() - 1);
    //sp::ranqsort(data, 0, data.size() - 1);
    /*sp::treqsort(data, 0, data.size() - 1);
    cout << "It took " << sp::counting() << "comparisons to sort this list." << endl;*/

    //Calling Heap sort
    /*sp::hsort(data);*/

    //calling Merge sort
    /*sp::mergesort(data, 0, data.size() - 1);
    cout << "It took " << sp::counting() << "comparisons to sort this list." << endl;*/


    //calling Insertion sort program 
    /*sp::isort(data);*/

    //calling selection sort program
    /*sp::ssort(data);*/

    //calling bubble sort program 
    /*sp::bsort(data);*/









    
    //searching programs
   
    //string p;
    //getline(file, p);
    //int t = stoi(p);

    //for (int g = 0; g < t; g++) {

    //    string u;

    //    getline(file, u);

    //    int c = stoi(u);;

    //    //Sequential search program
    //    /*int array = searching::ss(data, c);
    //    searching::search(data.at(array));*/

    //    //Binary search program
    //    /*int array = searching::bs(data, c);
    //    searching::bsearch(data.at(array));*/

    //}


    //searching::st(t);
    /*searching::bst(t);*/
}