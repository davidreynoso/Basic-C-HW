//
//  Tryin.cpp
//  HW 3
//
//  Created by David Reynoso on 11/3/22.
//

#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;


int main() {
    vector<double> a = {1, 4, 9, 16, 25, 36};
    vector<double> b = {-1, -4, -5, -16, -25, -36};
    b = a;
    for (int i = 0; i < a.size(); i++)
    {
        cout << b[2] << endl;
    }
}
    


