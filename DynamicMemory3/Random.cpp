//
//  Random.cpp
//  DynamicMemory3
//
//  Created by Анна Горячева on 13.03.2021.
//

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

template <typename T>
void Random (T& value)
{
//    cout << typeid(value).name()<<endl;
    if(typeid(value)==typeid(float)||typeid(value)==typeid(double))
    value=double(rand()%10000)/100;
    else if (typeid(value)==typeid(char))
    value = rand();
    else
        value = rand()%100;
    
}
template <typename T>
void FillRand(T arr[], const int n)
{
for (int i=0; i<n; i++)
{
//    *(arr+i)=rand()%100;    // * - возвращает значение по адресу
    Random(arr[i]);
}
}
template <typename T>
void FillRand(T** arr, const int m, const int n)
{
    Random(arr[0][0]);
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
//           arr[i][j]=rand()%100;
            Random(arr[i][j]);
        }
    }
}
