/*
PIC 10A Homework 3, backwards.cpp
Author: David Reynoso
UID: 705607919
Discussion Section: 3B
Date: 10/19/2022
*/


#include <iostream>
#include <string>

using namespace std;

int main() {
    // Ask to enter a word
    cout << "Enter word: ";
    string mystring;
    cin >> mystring;
    // make a string to store the reverse
    string reverse_string;
    int counter;
    // builds the reverse string by adding the letters individually right to left from mystring which makes it the reverse of mystring
    for (counter = 0; counter < mystring.length(); counter++) {
        reverse_string = reverse_string + mystring[mystring.length()-counter-1];
    }
    // We now output our reverse
    cout << "Backwards: " << reverse_string << endl;
    return 0;
}
