/*
PIC 10A Homework 8, findnum.cpp
Author: David Reynoso
UID: 705607919
Discussion Section: 3B
Date: 11/29/2022
*/

#include "findnum.h"

int* find_num(int* arr, int size, int num)
{
    int i = 0;
    while (i < size)
    {
        // arr here will point to the inputed value, not an address
        if (num == arr[i])
        {
            // this gives the address
            return &(arr[i]);
        }
        i++;
    }
    return nullptr;
}
