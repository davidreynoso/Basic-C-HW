/*
PIC 10A Homework 4, randomwalk.cpp
Author: David Reynoso
UID: 705607919
Discussion Section: 3B
Date: 10/26/2022
*/


#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
    srand(static_cast<int>(time(nullptr)));
    // x is to move left or right
    int x = 0;
    // y is to move up or down
    int y = 0;
    int i = 0;
    // make loop that'll only break when hits boundary or origin (using the if statements which will make i =20)
    while (i < 10) {
        int a = x;
        int b = y;
        // pick either 1 or -1 randomly
        int move = rand() % 2 + 1;
        if (move == 2)
        {
            move = -1;
        }
        // pick either x or y to add the move to randomly
        int choose = rand() % 2 + 1;
        if (choose == 1)
        {
            x = x + move;
        }
        else if (choose == 2)
        {
            y = y + move;
        }
        // prints our moves with its direction
        if (x<a)
        {
            cout << setw(10) << left << "Left" << '(' << x << ',' << y << ')' << endl;
        }
        else if (x > a)
        {
            cout << setw(10) << left << "Right" << '(' << x << ',' << y << ')' <<endl;
        }
        else if (y < b)
        {
            cout << setw(10) << left << "Down" << '(' << x << ',' << y << ')' << endl;
        }
        else if (y > b)
        {
            cout << setw(10) << left << "Up" << '(' << x << ',' << y << ')' << endl;
        }
        // Below will create our breaks where we either hit the boundary or origin
        if ((x <=-5) or (x >=5) or (y >=5) or (y <=-5))
        {
            cout << "Hit the boundary!" << endl;
            i = 20;
        }
        if ((x==0) and (y==0))
        {
            cout << "Back to the origin!" << endl;
            i = 20;
        }
    }
    return 0;
}
    
