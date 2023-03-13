# include "middle_list.h"

void itc_pos_neg_analysis_lst(const vector <int>& lst) {
    vector <int> negative, zeros, positive;
    itc_pos_neg_separator_lst(lst, negative, zeros, positive);
    cout << "Положительные:" << "\t\t" << "Отрицательные:" << "\n";
    cout << "Количество чисел: " << positive.size() << ",\t\t" << "Количество чисел: " << negative.size() << ",\n";
    cout << "Максимальная цифра: " << itc_max_lst(positive) << ",\t\t" << "Максимальная цифра: " << itc_max_lst(negative) << ",\n";
    cout << "Минимальная цифра: " << itc_min_lst(positive) << ",\t\t" << "Минимальная цифра: " << itc_min_lst(negative) << ",\n";
    cout << "Сумма чисел: " << itc_sumlst(positive) << ",\t\t" << "Сумма чисел: " << itc_sumlst(negative) << ",\n";
    int average_pos = 0;
    if (positive.size() > 0)
        average_pos = itc_sumlst(positive) / positive.size();
    int average_neg = 0;
    if (negative.size() > 0)
        average_neg = itc_sumlst(negative) / negative.size();
    cout << "Среднее значение: " << average_pos << ",\t\t" << "Среднее значение: " << average_neg << ",\n\n";
    cout << "Количество нулей: " << zeros.size();
}