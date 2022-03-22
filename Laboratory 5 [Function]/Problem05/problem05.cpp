/*
NAME: MD. SABBIR AHMED
ID:20200105021
SECTION:A
----------------------
CHAPTER:05
PROBLEM:05
*/

#include<iostream>
using namespace std;

// since we need to change all the variables, therefore, we used call by reference for all variables

void get_value(int &c5, int &c4, int &c3, int &c2, int &c1, int &c0, int &x){

cout << "Enter values in the order: c5, c4, ... , c0" << endl;

cin >> c5 >> c4 >> c3 >> c2 >> c1 >> c0;

cout << "Enter the value of x:" << endl;

cin >> x;

}

// since we only need to get the result in 'x', therefore, use call by reference only for 'x'

void get_result(int c5, int c4, int c3, int c2, int c1, int c0, int &x){

// given formula

x = ((((c5 * x + c4) * x + c3) * x + c2) * x + c1) * x + c0;

}

int main(){

int c5, c4, c3, c2, c1, c0, x;

// getting the values from the user using call by reference

get_value(c5, c4, c3, c2, c1, c0, x);

// calculating the result of polynomial by using call by reference only for variable 'x'

get_result(c5, c4, c3, c2, c1, c0, x);

// printing the result

cout << "Result:\n" << x << endl;

return 0;

}
