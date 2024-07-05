﻿#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

void show_vec(vector<int>& v)                                 // Метод выводит значения вектора 
{                                                             // в терминал
    for (int i = 0; i < v.size(); i++)
    {
        if (i == 0)cout << "{ " << v[i] << ',';
        else
        {
            if (i == v.size() - 1)cout << ' ' << v[i] << " }";
            else cout << ' ' << v[i] << ',';
        }
    }
}

void bubble_sort(vector<int>& v)                              // Метод сортировки пузырьком
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v.size() - 1 - i; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
            }
        }
    }
}

int main()
{
    system("color 80");
    system("chcp 1251>nul");

    vector<int>vec;                                           // Объявляем вектор без размера
    int n = 0;                                                // Объявляем и инициализируем переменную
                                                              // для записи значений в векторе
    while (n != -2)                                           // Метод продолжается пока не введено -2
    {
        cout << " Введите число: ";                           // Запрашиваем переменную
        cin >> n;                                             // Записываем переменную в n

        if (n != -1)                                          // Если n не равна -1
        {
            if (vec.size() < 5)                               // Если размер вектора меньше 5
            {
                vec.push_back(n);                             // Добавляем в вектор значение n
                bubble_sort(vec);                             // и сортируем мектор по возрастанию
            }
            else                                              // иначе
            {
                if (vec[4] > n)                               // если пятый элемент в векторе больше n
                {
                    vec.pop_back();                           // удаляем пятый элемент
                    vec.push_back(n);                         // и на его место добавляем значение n
                    bubble_sort(vec);                         // и сортируем вектор по возростанию
                }
            }
            
        }
        else                                                  // Если введено -1
        {
            if (vec.size() == 5)                              // при размере вектора 5
            {                                                 // выводим значение пятого элемента 
                cout << endl;                                 // в векторе
                cout << " Вывод: " << vec[4];
                cout << " (в отсортированном виде введённые числа выглядят так: ";
                show_vec(vec);
                cout << ")." << endl;
            }
        }
    }

    system("pause>nul");
    return 0;
}