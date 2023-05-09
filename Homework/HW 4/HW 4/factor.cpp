/*
PIC 10A Homework 4, factor.cpp
Author: David Reynoso
UID: 705607919
Discussion Section: 3B
Date: 10/26/2022
*/

#include <iostream>

using namespace std;

void pfactormaker(int a) {
    int b = 2;
    // this while loop checks if there are any chance of any extra factors left to be had as any new a will not be able to be a product of previous b as we divide them out. Since numbers are either prime a product of primes, we check the next smallest case, if the new b times itself is more than a, we know our redefined a is prime
    while (b * b <= a)
    {
        // we start from the lowest prime factor up, that is if we check going up each number must be prime, see we double check if it can be divided again by that factor to make sure we exhaust any non prime multpiple of any b
        if (a % b == 0)
        {
            cout << b << " ";
            a /= b;
        }
        else
        {
            b = b + 1;
        }
    }
    // we know a is our last prime factor from before but have to double check its not 1
    if (a > 1)
    {
        cout << a << " ";
    }
}


int main() {
    cout << "Input a positive integer greater than 1: ";
    int number;
    cin >> number;
    cout << "Prime factors: ";
    pfactormaker(number);
    cout << endl;
    
    return 0;
}


