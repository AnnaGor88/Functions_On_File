//
//  main.cpp
//  DynamicMemory3
//
//  Created by Анна Горячева on 12.03.2021.
//

#include <iostream>
#include "Array.h"
#include "Random.h"
#include "Memory.h"
#include "Print.h"

//using namespace std;

using std::cout;
using std::cin;
using std::endl;


//#define DYNAMIC_MEMORY_1
#define tab "/t"
int main()
{
    setlocale (LC_ALL, "");
    
    int m; //stroki
    int n; // stolbci
    cout << "Введите количество строк   "; cin >> m;
    cout << "Введите количество столбцов    "; cin >> n;
    typedef float DataType;
    DataType** arr = Allocated<DataType>(m,n);
    
    FillRand(arr,m,n);
    Print(arr,m,n);
    cout << "Memory allocated"<< endl;
   // cout << "Добавляем строку в конец массива :" << endl;
    
    arr=push_row_back(arr, m, n);
    cout << "Строка добавлена" << endl;
    Print(arr,m,n);
    cout << " Добавляем строку" << endl;
    arr=push_row_front(arr, m, n);
    
    Print(arr,m,n);
    cout << "Добавляем столбец в конце массива :" << endl;
    push_col_back(arr,m,n);
    Print(arr,m,n);
    Clear(arr,m);
#ifdef DYNAMIC_MEMORY_1
   // int n; // добавляемые значения
    cout << "Введите размер массива: "; cin >> n;
    int* arr = new int [n];
    int s_arr[5];
//    cout << sizeof(arr)<< endl;
//    cout << sizeof(s_arr)<< endl;
    int value;
    int index;
    cout << "Введите добавляемое значение : "; cin >> value;
    Push_back(arr, n, value);
    FillRand(arr,n);
    Print(arr,n);
    Push_Front(arr, n, value);
    Print(arr,n);
    Insert(arr, n, index,value);
    Print(arr,n);
    Pop_back(arr,n);
    Print(arr,n);
    Pop_front(arr,n);
    Print(arr,n);
    Erase(arr, n, index);
    Print(arr,n);
#endif //DYNAMIC_MEMORY_1  delete [] arr;
    return 0;
}
