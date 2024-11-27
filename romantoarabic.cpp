#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Функция для перевода римских цифр в арабские числа
int FromRoman(string s) {
    map<char, int> roman;
    roman['I'] = 1;
    roman['V'] = 5;
    roman['X'] = 10;
    roman['L'] = 50;
    roman['C'] = 100;
    roman['D'] = 500;
    roman['M'] = 1000;

    int total = 0;
    int prev_value = 0;

    for (int i = s.size() - 1; i >= 0; --i) {
        char c = s[i];
        int value = roman[c];

        // Если предыдущее значение меньше текущего, вычитаем
        if (value < prev_value) {
            total -= value;
        } else {
            total += value;
        }
        prev_value = value;
    }
    
    return total;
}

int main() {
    string s;
    cout << "Введите римские цифры (не более 3999): ";
    cin >> s;

    // Вызываем функцию для перевода римских цифр в арабские числа
    int result = FromRoman(s);
    if (result>=4000){
        cout << "Вы ввели число большее чем 3999";
    }
    else {
        cout << s << " в арабских числах это " << result;
        return 0;
    }
}