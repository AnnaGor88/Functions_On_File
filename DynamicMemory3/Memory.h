//
//  Memory.h
//  DynamicMemory3
//
//  Created by Анна Горячева on 12.03.2021.
//
#pragma once
#include <iostream>
#ifndef Memory_h
#define Memory_h
template <typename T>
T** Allocated (const int m, const int n);
template <typename T>
void Clear (T** arr,const int m);
#include "Memory.cpp"
#endif /* Memory_h */
