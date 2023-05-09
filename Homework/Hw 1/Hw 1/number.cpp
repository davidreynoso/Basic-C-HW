/*
PIC 10A Homework 1, number.cpp
Author: David Reynoso
UID: 705607919
Discussion Section: 3B
Date: 10/03/2022
*/


#include <iostream>
using namespace std;
int main() {
    // Ask to enter in a number that we call number, it is a integer
    cout << "Input a three-digit number (100 - 999):" << endl;
    int number;
    cin >> number;
    // We build the reverse of our number using mod and integer division to get individual digits, and by multiplying by 100 and 10 we can order the digits as we like
    int number_reverse;
    number_reverse = (number%10)*100 + ((number%100)/10)*10 + number/100;
    // We now have our output and the tripe of the number is easy
    cout << "The reverse of the number is " << number_reverse << ".\n";
    cout << "The triple of the number is " << number*3 << ".\n";
    
    return 0;
}
