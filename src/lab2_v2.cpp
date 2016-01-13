#include "eecs230.h"
//Checking if a number is even or odd

void odd_or_even(int num)
{
    if(num%2 ==0) //even
        cout << num << " is even";
    else //odd
        cout << num << " is odd";
}

int main(){
    int num;
    cout << "Please enter an integer";
    cin >> num;
    if(!cin){
        cout << "The number entered is not an integer";
    }
    odd_or_even(num);
}
//
// Created by AnnieRuth on 1/13/2016.
//

