//
//  Print.cpp
//  DynamicMemory3
//
//  Created by Анна Горячева on 13.03.2021.
//

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

template <typename T>
void Print(T arr[], const int n)
{
for (int i=0; i<n; i++)
{
    cout << arr[i] << "\t";   // оператор индексирования [] возвращает значение по индексу
}
cout << endl;
}
template <typename T>
void Print(T** arr, const int m, const int n)
{
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout << arr [i][j] << "\t";
        }
        cout << endl;
    }
}
