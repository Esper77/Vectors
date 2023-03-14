#include "middle_list.h"

long itc_sum_even_lst(const vector <int> &lst){
    long sum = 0;
    for (int i = 0; i < lst.size(); i += 2)
        sum += lst[i];
    return sum;
}

long itc_sum_even_part_lst(const vector <int> &lst){
    long sum = 0;
    for (int i = 0; i < lst.size(); i++)
        if (lst[i] % 2 == 0)
            sum += lst[i];
    return sum;
}

void itc_odd_even_separator_lst(const vector <int> &lst, vector <int> &lst1, vector <int> &lst2){
    for (int i = 0; i < lst.size(); i++)
        if (lst[i] % 2 == 0)
            lst1.push_back(lst[i]);
        else
            lst2.push_back(lst[i]);
}

void itc_pos_neg_separator_lst(const vector <int> &lst, vector <int> &lst1, vector <int> &lst2, vector <int> &lst3){
    for (int i = 0; i < lst.size(); i++){
        if (lst[i] < 0)
            lst1.push_back(lst[i]);
        if (lst[i] > 0)
            lst3.push_back(lst[i]);
        if (lst[i] == 0)
            lst2.push_back(lst[i]);
    }
}

void itc_odd_even_analysis_lst(const vector <int> &lst){
    vector <int> odd, even;
    itc_odd_even_separator_lst(lst, even, odd);
    cout << "������ ������:" << '\n';
    cout << "���������� ������ �����: " << even.size() << ",\t\t" << "���������� �������� �����: " << odd.size() << "\n";
    cout << "������������ ������ �����: " << list_max(even) << ",\t\t" << "������������ �������� �����: " << list_max(odd) << ",\n";
    cout << "����������� ������ �����: " << list_min(even) << ",\t\t" << "����������� �������� �����: " << list_min(odd) << ",\n";
    cout << "����� ������ �����: " << sum_list(even) << ",\t\t" << "����� �������� �����: " << sum_list(odd) << ",\n";
}
