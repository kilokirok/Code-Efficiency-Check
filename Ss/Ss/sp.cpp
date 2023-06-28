#include "sp.h"
#include "ep.h"
#include <vector>
#include <iostream>

using namespace std;

//bubble sort program
//void sp::bsort(vector<ep>& bb) {
//
//	int bbi = 0;
//
//	for (int j = 0; j < bb.size(); j++) {
//
//		for (int k = bb.size() - 1; k > j; k--) {
//
//			bbi++;
//
//			if (bb[k].ids < bb[k - 1].ids) {
//
//				swap(bb[k], bb[k - 1]);
//				
//				for (auto l : bb) {
//
//					cout << l.ids << " ";
//
//				}
//
//				cout << endl;
//
//			}
//		}
//
//	}
//
//	cout << "It took " << bbi << "comparisons to sort this list." << endl;
//
//}
//
//void sp::printbsort(vector<ep> bsv) {
//
//}

//4950
//499500
//49995000
//Big O(n^3)


//Insertion sort
/*void sp::isort(vector<ep>& bb) {
	
    int key;
    int i, j;
    int ii = 0;
    
    
    for (i = 1; i < bb.size(); i++) {

        key = bb[i].ids;
        j = i - 1;

        while (j >= 0 && bb[j].ids > key) {

            ii ++;
            bb[j + 1].ids = bb[j].ids;
            j = j - 1;

        }

        bb[j + 1].ids = key;

        for (auto f : bb) {

            cout << f.ids << " ";


        }

        cout << endl;

    }

    cout << "It took " << ii << " comparisons to sort this list.";
	
}*/

//void sp::ssort(vector<ep>& ss) {
//
//    int n = ss.size();
//    int i, j;
//    int ii = 0;
//
//    for (i = 0; i < n - 1; i++) {
//
//        int mi = i;
//
//        for (j = i + 1; j < n; j++) {
//
//            if (ss[j].ids <= ss[mi].ids) {
//
//                mi = j;
//            }
//
//            ii++;
//
//        } //like here?
//
//        swap(ss[i].ids, ss[mi].ids);
//
//        /*for (auto f : ss) {
//
//            cout << f.ids << " ";
//
//        }*/
//
//        /*cout << endl;*/
//
//    }
//
//    cout << "It took " << ii << " comparisons to sort this list.";
//
//}

//int o = 0;
//
//void sp::merge(vector<ep>& ms, int p, int q, int r) {
//
//	int i;
//	int j;
//	int k;
//	int nl = q - p + 1;
//	int nr = r - q;
//
//	vector<ep> L(nl);
//	vector<ep> R(nr);
//
//	for (i = 0; i < nl; i++) {
//
//		L[i] = ms[p + i];
//
//	}
//
//	for (j = 0; j < nr; j++) {
//
//		R[j] = ms[q + j + 1];
//
//	}
//
//	i = 0;
//	j = 0;
//	k = p;
//
//	while (i < nl && j < nr) {
//
//		o += 1;
//
//		if (L[i].ids <= R[j].ids) {  
//
//			ms[k] = L[i]; 
//			i += 1;
//
//		}
//
//		else if(ms[k].ids = R[j].ids) {
//			 
//			j += 1;
//
//		}
//
//		k += 1;
//
//	}
//
//	while (i < nl) {
//
//		o += 1;
//		ms[k] = L[i];
//		i += 1;
//		k += 1;
//		
//		
//	}
//
//	while (j < nr) {
//		
//		ms[k] = R[j];
//		o += 1;
//		j += 1;
//		k += 1;
//
//	}

	/*for (auto f : ms) {

		cout << f.ids << " ";

	}

	cout << endl;*/

//}
//
//void sp::mergesort(vector<ep>& ms, int p, int r) {
//
//	if (p >= r) {
//
//		return;
//
//	}
//
//	int q = (p + r) / 2;
//
//	mergesort(ms, p, q);
//	mergesort(ms, q + 1, r);
//	merge(ms, p, q, r);
//	
//}
//
//int sp::counting() {
//
//	return o;
//
//}

//int o;
//int hs;
//
////l
//int sp::left(int l) {
//
//	return 2 * l + 1;
//
//}
////r
//int sp::right(int r) {
//
//	return 2 * (r + 1);
//
//}
////Max-Heapify
//void sp::Mh(vector<ep>& vi, int f) {
//
//	int l = left(i);
//	int r = right(i);
//	int largest;
//
//	o += 1;
//
//	if (l <= hs && vi[l].ids > vi[f].ids) {
//
//		largest = l;
//
//	}
//	else {
//
//		largest = f;
//
//	}
//
//	o += 1;
//
//	if (r <= hs && vi[r].ids > vi[largest].ids) {
//
//		largest = r;
//
//	}
//	if (largest != f) {
//
//		swap(vi[f], vi[largest]);
//		Mh(vi, largest);
//
//	}
//}
//
////Build-Max-Heap
//void sp::bmh(vector<ep>& vi) {
//
//	hs = vi.size() - 1;
//
//	for (int i = vi.size() / 2; i >= 0; i--) {
//
//		Mh(vi, i);
//
//	}
//}
//
////Main of Heap Sort p
//void sp::hsort(vector<ep>& vi) {
//
//	/*for (auto g : vi) {
//	
//		cout << g.ids << " ";
//
//	}*/
//	/*cout << endl;*/
//
//	bmh(vi);
//
//	for (int i = vi.size() - 1; i >= 1; i--) {
//
//		/*for (auto g : vi) {
//		
//			cout << g.ids << " ";
//
//		}*/
//
//		/*cout << endl;*/
//
//		hs = hs - 1;
//
//		swap(vi[0], vi[i]);
//		Mh(vi, 0);
//
//	}
//
//	/*for (auto g : vi) {
//	
//		cout << g.ids << " ";
//	 
//	}*/
//	
//	/*cout << endl;*/
//
//	cout << "It took " << o << "comparisons to sort this list.";
//}


//int o = 0;
//
//int sp::partition(vector<ep>& pi, int p, int r) {
//
//    ep x = pi[r];
//    int i = p - 1;
//    
//
//    for (int j = p; j <= r-1; j++) {
//
//        o = o + 1;
//
//        if (pi[j].ids <= x.ids) {
//            
//            i = i + 1;
//            swap(pi[i], pi[j]);
//            
//            /*for (auto& g : pi) {
//
//                cout << g.ids << " ";
//
//            }
//
//            cout << endl;*/
//
//        }
//    }
//
//    
//
//    swap(pi[i + 1], pi[r]);
//
//    /*for (auto g : pi) {
//
//        cout << g.ids << " ";
//
//    }
//
//    cout << endl;*/
//
//    return i + 1;
//
//    }
//
////Big-O -> O(n)
//
//void sp::qsort(vector<ep>& qi, int p, int r) {
//    
//
//    int q;
//
//    if (p < r) {
//
//        q = partition(qi, p, r);
//        qsort(qi, p, q - 1);
//        qsort(qi, q + 1, r);
//
//    }
//
//}
//
//int sp::ranpartition(vector<ep>& ri, int p, int r)
//{
//
//    int i = rand() % (r - p + 1) + p;
//
//    swap(ri[r], ri[i]);
//
//    return partition(ri, p, r);
//
//}
//
//
//void sp::ranqsort(vector<ep>& rri, int p, int r) {
//
//    if (p < r) {
//
//        int q = ranpartition(rri, p, r);
//        ranqsort(rri, p, q - 1);
//        ranqsort(rri, q + 1, r);
//
//    }
//   
//}
//
//void sp::treqsort(vector<ep>& ti, int p, int r) {
//
//    while (p < r) {
//
//        int q = partition(ti, p, r);
//        treqsort(ti, p, q - 1);
//        p = q + 1;;
//        
//    }
//   
//}
//
//int sp::counting() {
//    
//    	return o;
//    
//    }



