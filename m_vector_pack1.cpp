#include "middle_list.h"

vector <char> itc_strtlist(string str){
    vector <char> list;
    int len;
    len = itc_len(str);
    for (int i = 0; i < len; i++)
        list.push_back(str[i]);
    return list;
}

string itc_join(vector <char> lst, string sep){
    string str = "";
    str += lst[0];
    for (int i = 1; i < lst.size(); i++) {
        str += sep;
        str += lst[i];
        }
    return str;
}

string itc_rmstrspc(string str){
    string new_str = "";
    int len;
    len = itc_len(str);
    for (int i = 0; i < len; i++)
        if (str[i] != ' ')
            new_str += str[i];
    return new_str;
}

string itc_rmstrchar(string str, string less){
    string new_str = "";
    int len_str, len_remove;
    bool flag;

    len_str = itc_len(str);
    len_remove = itc_len(less);
    for (int i = 0; i < len_str; i++){
        for (int x = 0; x < len_remove; x++)
            if (less[x] != str[i])
                flag = false;
        if(flag)
            new_str += str[i];
        flag = true;
    }
    return new_str;
}

 long itc_sumlst(const vector <int> &lst){
    long sum = 0;
    for (int i = 0; i < lst.size(); i++)
        sum += lst[i];
    return sum;
 }
