#include <iostream>
#include <vector>
#include "searching.h"

using namespace std;
//for sequential
//double q, w;
//int j;

//binary search
int bln, bmn, bhn, lt;
double q, ac;



// searching program
//int searching::ss(vector<ep> r, int x) {
//
//    q = 0;
//
//    for (j = 0; j < r.size(); j++) {
//
//        q++;
//        if (r[j].ids == x) {
//
//            w += q;
//
//            return j;
//
//        }
//    }
//
//    return -1;
//
//}
//
//void searching::search(ep epy) {
//
//    cout << "FOUND: Name: " << epy.name << ",";
//    cout << " Age: " << epy.age << ",";
//    cout << " Job: " << epy.job << ",";
//    cout << "Hired: " << epy.yrs << endl;
//    cout << "at index " << j << " after " << q << " comparisons." << endl;
//
//}
//
//void searching::st(int ab) {
//
//    cout << "Done! Average amount of work per query : " << w / ab << " comparisons." << endl;
//
//}

//int searching::bs(vector<ep> r, int x) {
//    
//    bln = 0;
//    lt = 0;
//    q = 0.0;
//
//    bhn = r.size();
//
//    while (bln < bhn) {
//
//        q++;
//        bmn = (bhn + bln) / 2;
//
//        if (x <= r[bmn].ids) {
//
//            bhn = bmn;
//            lt++;
//
//        }
//
//        else {
//
//            bln = bmn + 1;
//            lt++;
//
//        }
//    }
//    
//    ac += q;
//
//    return bln;
//}
//
//void searching::bsearch(ep epy) {
//
//    cout << "FOUND: Name: " << epy.name << ",";
//    cout << " Age: " << epy.age << ",";
//    cout << " Job: " << epy.job << ",";
//    cout << "Hired: " << epy.yrs << endl;
//    cout << "at index " << bln << " after " << q << " comparisons." << endl;
//
//}
//
//void searching::bst(int ab) {
//    cout << "Done! Average amount of work per query : ";
//    cout << ac / ab << " comparisons." << endl;
//}