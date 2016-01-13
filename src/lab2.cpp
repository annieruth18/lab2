#include "eecs230.h"

//
// Lab 2 programs
//

 //int illegalStatements() {
    /* Start here! */
    //int double = 0;
    //double char = 2.5;
    //char mychar = 'd'; mychar += 12;
    //unsigned int a = -1;
    //int pi = 3.14;
    //short num = 1e9;
    //string mystring = 5;
    //return 0;
//}

void odd_or_even(int num)
{
    if(num%2 ==0) //even
        cout << num << " is even";
    else //odd
        cout << num << " is odd";
}

double calc(string operation, double x1, double x2){
    double x3 = 0;
    if(operation == "+")
        x3 = x1 + x2;
    else if(operation == "-")
        x3 = x1 - x2;
    else if(operation == "*")
        x3 = x1*x2;
    else if(operation == "/")
        x3 = x1/x2;
    else
        cout << "Operation not valid";
    return x3;
}

int main() {
    //illegalStatements();
    //cout << "Start with Exercise 1 (legal/illegal statements)" << endl;
    //cout << "Then work on the exercises and code them up." << endl;
    //int num;
    //cout << "Please enter an integer";
    //cin >> num;
    //if(!cin){
      //  cout << "The number entered is not an integer";
    //}
    //odd_or_even(num);
    //odd_or_even(5);
    //odd_or_even(8);

    string operation;
    double x1;
    double x2;
    double x3;
    cout << "Enter an operator and two numbers";
    cin >> operation;
    cin >> x1;
    cin >> x2;
    calc(operation, x1, x2);
    cout << "The answer is " << x3;
}

