#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

void show_vec(vector<int>& v)
{
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

void bubble_sort(vector<int>& v)
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

    vector<int>vec;
    int n = 0;

    while (n != -2)
    {
        cout << " Введите число: ";
        cin >> n;

        if (n != -1)
        {
            if (vec.size() < 5)
            {
                vec.push_back(n);
                bubble_sort(vec);
            }
            else
            {
                if (vec[4] > n)
                {
                    vec.pop_back();
                    vec.push_back(n);
                    bubble_sort(vec);
                }
            }
            
        }
        else
        {
            if (vec.size() == 5)
            {
                cout << endl;
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