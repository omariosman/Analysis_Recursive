/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

bool Factor_In_Range(int k , int n) {
    //If the range is empty (i.e. k >=n) return false
    if (k >= n) {
        return false;
    }
    //else if k divides n with no remainder, return true
    else if (n % k == 0){
        return true;
    }
    else {
        Factor_In_Range(k+1, n);
    }
  
}

int main()
{
    
    cout << "Enter an integer: ";
    int num;
    cin >> num;
    cout << Factor_In_Range(2,num);
}