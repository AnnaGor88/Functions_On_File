//
//  Array.h
//  DynamicMemory3
//
//  Created by Анна Горячева on 13.03.2021.
//
#pragma once
#include <iostream>
#ifndef Array_h
#define Array_h
template <typename T>
T* Push_back (T* &arr, int &n, int value);
template <typename T>
T* Push_Front (T* &arr, int &n, int value);

template <typename T>
T Insert (T* &arr, int &n, int index, int value);

template <typename T>
T Pop_back (T* &arr, int &n);
template <typename T>
T Pop_front (T* &arr, int &n);
template <typename T>
T Erase (T* &arr, int &n, int index);

//Функция добавления строки в конец массива
template <typename T>
T** push_row_back(T** arr, int& m, const int n);
template <typename T>
T** push_row_front(T** arr, int& m, const int n);

template <typename T>
void push_col_back(T** arr, int m, int &n);

#include "Array.cpp"
#endif /* Array_h */
