﻿//Лабораторная работа номер 4. Вариант 21 задание 2
//Выполнил Фукс Владислав Ивт 32

//Дано целое число N(> 0).Используя один цикл,
//найти сумму 1 + 1 / (1!) + 1 / (2!) + 1 / (3!) + . . . + 1 / (N !)
//(выражение N!— N–факториал — обозначает произведение всех целых чисел от 1 до N : N!= 1·2·. ..·N).
//Полученное число является приближенным значением константы e = exp(1).


#include <iostream>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int n;
    cout << "Целое число N = "; cin >> n;
    double n1 = 1;
    double otv = 1;
    int i;
    //цикл
    for (i = 1; i <= n; ++i) {
        n1 *= (double)i;
        otv += 1 / n1;
    }
    //вывод ответа
    cout << otv;
}
