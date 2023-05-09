/*
PIC 10A Homework 1, printw.cpp
Author: David Reynoso
UID: 705607919
Discussion Section: 3B
Date: 10/03/2022
*/

#include <iostream>
using namespace std;
int main() {
    // We just create a string with the exact desired message, using backslack where we need to so some special characters appear where we need them when printing the string
    string Wstring = "\"Hello 'W'!\"\n**************\n \\    /\\    /\n  \\  /  \\  /\n   \\/    \\/   \n**************";
    cout << Wstring << endl;
    return 0;
}
