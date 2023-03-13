#include "middle_list.h"

long long itc_len(string str){
  long long counter = 0;
  for (int i = 0; str[i] != '\0'; i++)
    counter++;
  return counter;
}

int list_max(vector <int>& mass) {
    int maximum = -2147483648;
    for (int i = 0; i < mass.size(); i++)
        if (mass[i] > maximum)
            maximum = mass[i];
    return maximum;
}

int list_min(vector <int>& mass) {
    int minimum = 2147483647;
    for (int i = 0; i < mass.size(); i++)
        if (mass[i] < minimum)
            minimum = mass[i];
    return minimum;
}