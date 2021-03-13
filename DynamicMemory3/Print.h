//
//  Print.h
//  DynamicMemory3
//
//  Created by Анна Горячева on 13.03.2021.
//
#pragma once
#include <iostream>
#ifndef Print_h
#define Print_h

template <typename T>
void Print(T arr[], const int n);
template <typename T>
void Print(T** arr, const int m, const int n);

#include "Print.cpp"
#endif /* Print_h */
