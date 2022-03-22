/*
NAME: MD. SABBIR AHMED
ID:20200105021
SECTION:A
----------------------
CHAPTER:05
PROBLEM:04
*/

#include<iostream>
#include<cmath>

using namespace std;

void compute_sphere(float &v, float &s, float r){

// since volume(v) and surface area(s) parameter are taken as pass by reference, whatever changes we make to them will be reflected in the calling function

// M_PI is a constant defined as: #define M_PI 3.14159265358979323846

// calculating volume

v = (4/3) * M_PI * pow(r,3);

// calculating surface area

s = 4 * M_PI * pow(r,2);

// not returning the values of v and s, they will be automatically show in main

}

int main(){

// initialising two float variables which are to be passed using call by reference

float v = 0.0, s = 0.0;

cout << "Before calling compute_sphere:\n Volume: " << v << "\n Surface Area: " << s << endl;

// calling the function

compute_sphere(v, s, 6.2);

cout << "After calling compute_sphere:\n Volume: " << v << "\n Surface Area: " << s << endl;

return 0;

}

