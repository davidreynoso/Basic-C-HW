/*
PIC 10A Homework 2, num2month.cpp
Author: David Reynoso
UID: 705607919
Discussion Section: 3B
Date: 10/11/2022
*/

#include <iostream>
using namespace std;

int main() {

    // make sure each month is length 9 including trailing white space
    string MyMonthString = "January  February March    April    May      June     July     August   SeptemberOctober  November December ";
    cout << "Integer between 1 and 12: ";
    int integer;
    cin >> integer;
    // we do integer-1 because strings start index 0, each month is length 9 away from the other so we just pick our months in lengths of 9
    string Month = MyMonthString.substr(9*(integer-1),9);
    cout << "Month: " << Month << endl;
    return 0;
}
