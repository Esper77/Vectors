# include "middle_list.h"

void itc_pos_neg_analysis_lst(const vector <int>& lst) {
    vector <int> negative, zeros, positive;
    itc_pos_neg_separator_lst(lst, negative, zeros, positive);
    cout << "�������������:" << "\t\t" << "�������������:" << "\n";
    cout << "���������� �����: " << positive.size() << ",\t\t" << "���������� �����: " << negative.size() << ",\n";
    cout << "������������ �����: " << list_max(positive) << ",\t\t" << "������������ �����: " << list_max(negative) << ",\n";
    cout << "����������� �����: " << list_min(positive) << ",\t\t" << "����������� �����: " << list_min(negative) << ",\n";
    cout << "����� �����: " << sum_list(positive) << ",\t\t" << "����� �����: " << sum_list(negative) << ",\n";
    int average_pos = 0;
    if (positive.size() > 0)
        average_pos = sum_list(positive) / positive.size();
    int average_neg = 0;
    if (negative.size() > 0)
        average_neg = sum_list(negative) / negative.size();
    cout << "������� ��������: " << average_pos << ",\t\t" << "������� ��������: " << average_neg << ",\n\n";
    cout << "���������� �����: " << zeros.size();
}
