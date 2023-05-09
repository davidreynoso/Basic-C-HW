/*
PIC 10A Homework 2, leapyear.cpp
Author: David Reynoso
UID: 705607919
Discussion Section: 3B
Date: 10/11/2022
*/

#include <iostream>
using namespace std;

int main() {

    cout << "Enter year strictly after 1581 AD: ";
    int year;
    cin >> year;
    // we only need to specify that years divisible by 400 and years divisible by 4 are leap years, noting if its divisible by 4 it also must be not divisible by 100 (other than when the year is divisible by 400)
    if (year%400==0) {
        cout << "This is: A leap year" << endl;
    }
    else if (year%4==0 and year%100!=0) {
        cout << "This is: A leap year" << endl;
    }
    else {
        cout << "This is: Not a leap year" << endl;
    }
    return 0;
}
