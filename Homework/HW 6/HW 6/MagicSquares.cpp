/*
PIC 10A Homework 6, MagicSquares.cpp
Author: David Reynoso
UID: 705607919
Discussion Section: 3B
Date: 11/15/2022
*/

#include <iostream>
#include <vector>

using namespace std;


bool input_valid(const vector<int> & vec){
    int counter = 0;
    // first check if there are 16 numbers, we cannot have more or less or it will be invalid
    if (vec.size() != 16)
    {
        return false;
    }
    // we loop through numbers 1-16 and check how many there are of each, making sure there is only one of each
    for (int i=1; i<=16; i++)
    {
        counter = 0;
        for (int j=0; j<vec.size(); j++)
        {
            if (vec[j] == i)
            {
                counter++;
            }
        }
        // remember return ends the function
        if (counter != 1)
        {
            return false;
        }
    }
    return true;
}
    
vector<vector<int>> write_vector_to_square(const vector<int> & vec){
    vector<vector<int>> square;
    // make the rows of 4, and we just insert it into 'square'
    vector<int> Row1 = {vec[0],vec[1],vec[2],vec[3]};
    vector<int> Row2 = {vec[4],vec[5],vec[6],vec[7]};
    vector<int> Row3 = {vec[8],vec[9],vec[10],vec[11]};
    vector<int> Row4 = {vec[12],vec[13],vec[14],vec[15]};
    square.push_back(Row1);
    square.push_back(Row2);
    square.push_back(Row3);
    square.push_back(Row4);
    return square;
}


bool is_magic_squares(const vector<vector<int>> & vec){
    // I call this rcd sum for row collum diagonal sum
    int rcdsum = 0;
    // first make a stored sum of one of the rows, all the diagonals, collumns, and rows must be equal to this sum
    int storedsum = vec[0][0] + vec[0][1] + vec[0][2] + vec[0][3];
    // this loop will find all the sums of the rows and compare them to storedsum
    for (int i=1; i<=3; i++)
    {
        rcdsum = 0;
        for (int j=0; j<=3; j++)
        {
            rcdsum += vec[i][j];
        }
        if (storedsum != rcdsum)
        {
            return false;
        }
    }
    // this will check the top left to bottom right diagonal, compares it to storedsum
    rcdsum = 0;
    for (int i=0; i<=3; i++)
    {
        rcdsum += vec[i][i];
    }
    if (storedsum != rcdsum)
    {
        return false;
    }
    // this will check the bottom left to top right diagonal, compares it to storedsum
    rcdsum = 0;
    for (int i=3; i>=0; i--)
    {
        rcdsum += vec[i][3-i];
    }
    if (storedsum != rcdsum)
    {
        return false;
    }
    // this will check all the collum sums, compares them to storedsum
    for (int i=0; i<=3; i++)
    {
        rcdsum = 0;
        for (int j=0; j<=3; j++)
        {
            rcdsum += vec[j][i];
        }
        if (storedsum != rcdsum)
        {
            return false;
        }
    }
    // if the function reaches this point, all the individual sums are equal to stored sum, so the row, collumn, and diagonal sums, are equal to eachother, making a magic square
    return true;
}





// DO NOT MODIFY THE CODE BELOW THIS LINE
//-----------------------------------------------

int main(){
  int input;
  vector<int> myvector;
  cout << "Please input a sequence of 16 postive integers, ending with Q:" << endl;
  while (cin >> input){
    myvector.push_back(input);
  }
    
  bool flag1 = input_valid(myvector);
  
  if (flag1 == 0){
    cout<<"invalid input!"<<endl;
  }else{
    vector<vector<int>> mag_square;
    mag_square = write_vector_to_square(myvector);
    bool flag2 = is_magic_squares(mag_square);
    if (flag2){
      cout << "This is a magic square."<<endl;
    }else{
      cout << "This is not a magic square." << endl;
    }
  }
  return 0;
}
