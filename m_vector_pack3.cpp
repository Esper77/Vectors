# include "middle_list.h"

void itc_pos_neg_analysis_lst(const vector <int>& lst) {
    vector <int> negative, zeros, positive;
    itc_pos_neg_separator_lst(lst, negative, zeros, positive);
    cout << "�������������:" << "\t\t" << "�������������:" << "\n";
    cout << "���������� �����: " << positive.size() << ",\t\t" << "���������� �����: " << negative.size() << ",\n";
    cout << "������������ �����: " << itc_max_lst(positive) << ",\t\t" << "������������ �����: " << itc_max_lst(negative) << ",\n";
    cout << "����������� �����: " << itc_min_lst(positive) << ",\t\t" << "����������� �����: " << itc_min_lst(negative) << ",\n";
    cout << "����� �����: " << itc_sumlst(positive) << ",\t\t" << "����� �����: " << itc_sumlst(negative) << ",\n";
    int average_pos = 0;
    if (positive.size() > 0)
        average_pos = itc_sumlst(positive) / positive.size();
    int average_neg = 0;
    if (negative.size() > 0)
        average_neg = itc_sumlst(negative) / negative.size();
    cout << "������� ��������: " << average_pos << ",\t\t" << "������� ��������: " << average_neg << ",\n\n";
    cout << "���������� �����: " << zeros.size();
}