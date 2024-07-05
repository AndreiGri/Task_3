#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

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
            vec.push_back(n);

            for (int i = 0; i < vec.size(); i++)
            {
                for (int j = 0; j < vec.size() - 1 - i; j++)
                {
                    if (vec[j] > vec[j + 1])
                    {
                        swap(vec[j], vec[j + 1]);
                    }
                }
            }
        }
        else
        {
            if (vec.size() >= 5)
            {
                for (int i = 0; i < vec.size(); i++)
                {
                    cout << ' ' << vec[i];
                }
                cout << endl;
                cout << ' ' << vec[4] << endl;
            }
        }
    }

    system("pause>nul");
    return 0;
}