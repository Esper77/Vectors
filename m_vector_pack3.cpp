# include "middle_list.h"

void itc_pos_neg_analysis_lst(const vector <int>& lst) {
    vector <int> negative, zeros, positive;
    itc_pos_neg_separator_lst(lst, negative, zeros, positive);
    cout << "Положительные:" << "\t\t" << "Отрицательные:" << "\n";
    cout << "Количество чисел: " << positive.size() << ",\t\t" << "Количество чисел: " << negative.size() << ",\n";
    cout << "Максимальная цифра: " << list_max(positive) << ",\t\t" << "Максимальная цифра: " << list_max(negative) << ",\n";
    cout << "Минимальная цифра: " << list_min(positive) << ",\t\t" << "Минимальная цифра: " << list_min(negative) << ",\n";
    cout << "Сумма чисел: " << sum_list(positive) << ",\t\t" << "Сумма чисел: " << sum_list(negative) << ",\n";
    int average_pos = 0;
    if (positive.size() > 0)
        average_pos = sum_list(positive) / positive.size();
    int average_neg = 0;
    if (negative.size() > 0)
        average_neg = sum_list(negative) / negative.size();
    cout << "Среднее значение: " << average_pos << ",\t\t" << "Среднее значение: " << average_neg << ",\n\n";
    cout << "Количество нулей: " << zeros.size();
}
