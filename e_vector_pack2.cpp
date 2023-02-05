#include "easy_list.h"

void itc_rev_list(vector <int> &mass){
    int buffer, len;
    len = mass.size();
    for (int x = 0; x < len/2; x++){
        buffer = mass[x];
        mass[x] = mass[len-x-1];
        mass[len-x-1] = buffer;
    }
}


void itc_rev_par_list(vector <int> &mass){
    int buffer, len;
    len = mass.size();
    for (int x = 0; x < len-1; x += 2){
        buffer = mass[x];
        mass[x] = mass[len+1];
        mass[x+1] = buffer;
    }
}


void itc_lshift_list(vector <int> &mass){
    int container = mass[0];
    for(int x = mass.size() - 1; x > 1; x--)
        mass[x-1] = mass[x];
    mass[mass.size() - 1] = container;
}


void itc_rshift_list(vector <int> &mass){
    int container = mass[mass.size() - 1];
    for(int x = 1; x < mass.size() - 1; x++)
        mass[x+1] = mass[x];
    mass[0] = container;
}


void itc_super_shift_list(vector <int> &mass, int n){
    if (n > 0)
        for (int x = 0; x < n; x++)
            itc_rshift_list(mass);
    else 
        if (n < 0){
            n *= -1;
            for (int x = 0; x < n ; x++)
                itc_lshift_list(mass);
        }
}
