#include "easy_list.h"

void itc_even_index_list (const vector <int> &mass, vector <int> &mass2){
    for (int x = 0; x < mass.size(); x += 2)
        mass2.push_back(mass[x]);
}


void itc_even_parts_list(const vector <int> &mass, vector <int> &mass2){
    for (int x = 0; x < mass.size(); x++)
        if (mass[x] % 2 == 0) 
            mass2.push_back(mass[x]);
}


int itc_positive_list(const vector <int> &mass){
    int counter = 0;
    for (int x = 0; x < mass.size(); x++)
        if (mass[x] >= 0)
            counter++;
    return counter;
}


int itc_sl_list(const vector <int> &mass){
    int counter = 0;
    for (int x = 1; x < mass.size(); x++)
        if (mass[x-1] < mass[x])
            counter++;
    return counter;
}

bool itc_same_parts_list(const vector <int> &mass){
    bool flag = false;
    for (int x = 1; x < mass.size(); x++)
        if ((mass[x-1] >= 0) == (mass[x] >= 0))
            flag = true;
    return flag;
}