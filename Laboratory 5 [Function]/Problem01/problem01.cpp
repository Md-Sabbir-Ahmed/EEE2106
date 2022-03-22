/*
NAME: MD. SABBIR AHMED
ID:20200105021
SECTION:A
----------------------
CHAPTER:05
PROBLEM:01
*/
#include<iostream>
using namespace std;

// declare function average with four parameters

float average(float x1, float x2, float x3, float x4);

// main function

int main()

{

    // declare variables

    float x1, x2, x3, x4;


    // ask user to enter the inputs

    cout << "Enter four numbers: ";

    cin >> x1 >> x2 >> x3 >> x4;

    // calculate average value

    float avg = average(x1,x2,x3,x4);

    // display result

    cout << "Average = " << avg << endl;

    return 0;

}

// function to find average of four numbers

float average(float x1, float x2, float x3, float x4)

{

    return (x1 + x2 + x3 + x4) / 4;

}
