//
//  main.cpp
//  Discussion
//
//  Created by David Reynoso on 10/6/22.
//

#include <iostream>
using namespace std;

int main () {
    // insert code here...
    double hw1 = 0;
    double hw2 = 0;
    double hw3 = 0;
    double hw4 = 0;
    double hw5 = 0;
    double midterm = 0;
    double finalexam = 0;
    cout << "enter your assignments hw first, miderm, final" << endl;
    cin >> hw1 >> hw2 >> hw3 >> hw4 >> hw5 >> midterm >> finalexam;
    double totalgrade = hw1*.1 + hw2*.1 + hw3*.1 + hw4*.1 + hw5*.1 + midterm*.2 +finalexam*.3;
    cout << "your percent in this class is " << totalgrade << "%" << endl;
    string grade = "";
    totalgrade = totalgrade + 0.5;
    int totalrounded = totalgrade;
    if (totalgrade >= 91) {
        grade = 'A';
    } else if (totalgrade >= 81) {
        grade = 'B';
    } else if (totalgrade >= 71) {
        grade = 'C';
    } else if (totalgrade >= 61) {
        grade = 'D';
    } else if (totalgrade >= 51) {
        grade = 'E';
    } else {
        grade = 'F';
    }
    cout << "your grade is " << grade << endl;
    return 0;
}
