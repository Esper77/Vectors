#include "middle_list.h"

long long itc_len(string str){
  long long counter = 0;
  for (int i = 0; str[i] != '\0'; i++)
    counter++;
  return counter;
}
