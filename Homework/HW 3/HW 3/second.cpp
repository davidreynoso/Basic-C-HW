/*
PIC 10A Homework 3, second.cpp
Author: David Reynoso
UID: 705607919
Discussion Section: 3B
Date: 10/19/2022
*/


#include <iostream>

using namespace std;

int main() {
    // Ask to enter a number sequence
    cout << "Enter integers (Q to quit): ";
    int input;
    // set to int max to make comparing easier
    int smallest = 0;
    int smallest2 = 0;
    
    // Use if statements to compare neighboring values to find the second smallest,
    while (cin >> input) {
        if (smallest2 == 0) {
            smallest2 = smallest;
        }
        if (smallest == 0) {
            smallest = input;
        }
        if ((input > smallest) and (input < smallest2)) {
            smallest2 = input;
        }
    // finds the second smallest
        else if (input < smallest) {
            smallest2 = smallest;
            smallest = input;
        }
    }
    cout << "Second smallest: " << smallest2 << endl;
    
    return 0;
}
