//
//  Random.h
//  DynamicMemory3
//
//  Created by Анна Горячева on 13.03.2021.
//
#include <cstdlib>
#include <iostream>
#pragma once
#ifndef Random_h
#define Random_h
template <typename T>
void Random (T& value);
template <typename T>
void FillRand(T* arr, const int n);
template <typename T>
void FillRand(T** arr, const int m, const int n);
#include "Random.cpp"
#endif /* Random_h */
