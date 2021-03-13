//
//  Memory.cpp
//  DynamicMemory3
//
//  Created by Анна Горячева on 13.03.2021.
//

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
template <typename T>
T** Allocated (const int m, const int n)
{
    // 1 создаем массив указателей
    T** arr=new T*[m];
    for(int i=0; i<m; i++)
    {
        arr[i]=new T [n];
    }
    return arr;
}
template <typename T>
void Clear (T** arr,const int m)
{
//1) Удаляем строки двумерного массива:
    for (int i = 0; i < m; i++)
    {
        delete[] arr[i];
    }
    //2) Удаляем массив указателей:
    delete[] arr;
}
