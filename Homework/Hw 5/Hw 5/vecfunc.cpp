/*
PIC 10A Homework 5, vecfunc.cpp
Author: David Reynoso
UID: 705607919
Discussion Section: 3B
Date: 11/9/2022
*/

#include <iostream>
#include <vector>
using namespace std;


bool isfactor(int n, const vector<int> & vec){
    bool holder = false;
    // check each elt to see if it can be divided by n, true if it can
    for (int i=0; i < vec.size(); i++)
    {
        if ((vec[i] % n) != 0)
        {
            holder = false;
            break;
        }
        else if ((vec[i] % n) == 0)
        {
            holder = true;
        }
    }
    return holder;
}

int myMinimum(const vector<int> & vec){
    // first we make our variable that will store the minimum equal to the first elt in the vector
    int minholder = vec[0];
    // now we loop though and compare each elt in the vector to our minholder, updating minholder to equal any elt in the vector that is less than minholder, so by the end of the loop we have the minimum
    for (int i=1; i < vec.size(); i++)
    {
        if (minholder < vec[i])
        {
            continue;
        }
        else
        {
            minholder = vec[i];
        }
    }
    return minholder;
}

void myPermutation(vector<int> & vec){
    // create a copy of our vector so when we update our vector, we dont also have to account for any in between changes affecting any future changes to the vector while looping
    vector<int> copy = vec;
    // make our first elt the last elt of our vector
    vec[0] = copy[copy.size()-1];
    // this now loops, 'moving' each elt in the vector over one to the right in our order
    for (int i = 1; i < vec.size(); i++)
    {
        vec[i] = copy[i-1];
    }
    
}

void mySimplify(vector<int> & vec){
    int maxcf = 1;
    // loop will check each number that can possibly be the max common factor (the maxcf cant be greater than the minimum of the vector) and uses our isfactor function to see if any number <= the minimum is a factor candiate, updating maxcf if the given number is also greater than the current maxcf
    for (int i = 2; i <= myMinimum(vec); i++)
    {
        if ((isfactor(i, vec) == true) and (i > maxcf))
        {
            maxcf = i;
        }
    }
    // simplifies our vector
    for (int i = 0; i < vec.size(); i++)
    {
        vec[i] = vec[i]/maxcf;
    }
    
    
}

// DO NOT MODIFY THE CODE BELOW THIS LINE
//-----------------------------------------------
void print_vector(vector<int> & vec){
  for (int e : vec){
    cout << e << " ";
  }
  cout << endl;
}
int main(){
  int input;
  vector<int> myvector;
  cout << "Please input a sequence of postive integers, ending with Q:" << endl;
  while (cin >> input){
    myvector.push_back(input);
  }
  int min_element = myMinimum(myvector);
  cout << "min element: " << min_element << endl;
  myPermutation(myvector);
  print_vector(myvector);
  mySimplify(myvector);
  print_vector(myvector);
  return 0;
}
