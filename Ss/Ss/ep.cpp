#include <iostream>
#include "ep.h"



using namespace std;


// employee information form
ep::ep(string na, int id, int ag, string jo, int yr) {

    name = na;
    ids = id;
    age = ag;
    job = jo;
    yrs = yr;

}



//change other input vars to string

string ep::varstostring() {
    return name + "|" + to_string(ids) + "|" +to_string(age) + "|" + job + "|" + to_string(yrs);
}
