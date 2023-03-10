#include <iostream>
#include <vector>
using namespace std;


#ifndef MIDDLE_LIST_H_INCLUDED
#define MIDDLE_LIST_H_INCLUDED

// utils

long long itc_len(string str);

int list_max(vector <int>& mass);

int list_min(vector <int>& mass);

long sum_list(const vector <int> &lst);

// pack1

vector <char> itc_strtlist(string str);

string itc_join(vector <char> lst, string sep);

string itc_rmstrspc(string str);

string itc_rmstrchar(string str, string less);

long itc_sumlst(const vector <int> &lst);

// pack2

long itc_sum_even_lst(const vector <int> &lst);

long itc_sum_even_part_lst(const vector <int> &lst);

void itc_odd_even_separator_lst(const vector <int> &lst, vector <int> &lst1, vector <int> &lst2);

void itc_pos_neg_separator_lst(const vector <int> &lst, vector <int> &lst1, vector <int> &lst2, vector <int> &lst3);

void itc_odd_even_analysis_lst(const vector <int> &lst);

// pack3

void itc_pos_neg_analysis_lst(const vector <int> &lst);

#endif // MIDDLE_LIST_H_INCLUDED
