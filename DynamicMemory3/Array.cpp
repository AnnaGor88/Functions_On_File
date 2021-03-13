//
//  Array.cpp
//  DynamicMemory3
//
//  Created by Анна Горячева on 13.03.2021.
//

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

template <typename T>
T Push_back (T* &arr, int &n, int value)
{
    T* buffer = new T [n+1];
    for (int i=0; i<n; i++)
    {
        buffer[i] = arr[i];
    }
//    cout << typeid(arr).name()<< endl;
    arr[n]=value;
    delete [] arr;
    arr=buffer;
    n++;
}

template <typename T>
T** push_row_back(T** arr, int& m, const int n)
{
    //Создаем буферный массив
    T** buffer = new T* [m+1];
    for(int i=0; i<m; i++)
    {
        buffer[i]= arr[i];
    }
    
    // Удаляем массив указателей
    delete []arr;
    //  Создаем последнюю строку массива
    buffer[m]=new T [n] {};
    m++;
    return buffer;
}
template <typename T>
T** push_row_front(T** arr, int& m, const int n)
{
    T** buffer = new T* [m+1];
    for(int i=0; i<m; i++)
    {
        buffer[i+1]=arr[i];
    }
    //Удаляем исходный массив указателей
    delete []arr;
    buffer[0]=new T [n] {};
    m++;
    return buffer;
}
template <typename T>
void push_col_back(T** arr, const int m, int& n)
{
    for(int i=0; i<m; i++)
    {
        // создаем буфферную строку
        T* buffer=new T [n+1] {};
        //копируем исходную строку массива в буфферную
        for(int j=0; j<n; j++)
        {
            buffer[j]=arr[i][j];
        }
        delete []arr[i];
        //подменяем адресв массиве указателей на адрес новой строки
        arr[i]=buffer;
    }
    n++;
}
template <typename T>
T Push_Front (T* &arr, int &n, int value)
{
    T* buffer = new T [n+1];
    for (int i=0; i<n; i++)
    {
        buffer[i+1] = arr[i];
    }
    delete [] arr;
    arr=buffer;
    arr[0]=value;
    n++;
}
template <typename T>
T Insert (T* &arr, int &n, int index, int value)
{
    if (index>=0 && index<n)
    {
    
    T* buffer = new T [n+1];
    buffer[index]= value;
    for (int i=0; i<n; i++)
    {
        buffer[i+1] = arr[i];
    }
    delete [] arr;
        arr=buffer;
        
    }
    if (index<0 || index>n)
    {
        cout << "Введите номер элемента массива от 0 до " << n <<endl;
    }
}
template <typename T>
T Pop_back (T* &arr, int &n)
{
    T* buffer = new T [--n];
    for (int i=0; i<n; i++)
    {
        buffer[i] = arr[i];
    }
    delete [] arr;
    arr=buffer;
}
template <typename T>
T Pop_front (T* &arr, int &n)
{
    T* buffer = new T [n--];
    for (int i=0; i<n; i++)
    {
        buffer[i] = arr[i+1];
    }
    delete [] arr;
    arr=buffer;
}
template <typename T>
T Erase (T* &arr, int &n, int index)
{
    cout << "Введите индекс элемента массива: " << endl;
    cin >> index;
    if (index>=0 && index<n)
    {
        T* buffer = new T [n-1];
        for (int i=0; i<index; i++)
        {
            buffer[i] = arr[i];
        }
        for (int i=index; i<n; i++)
        {
            buffer[i+1] = arr[i+1];
        }
        delete [] arr;
        arr=buffer;
        n--;
    }
}
