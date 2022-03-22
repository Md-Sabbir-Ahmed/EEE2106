/*
NAME: MD. SABBIR AHMED
ID:20200105021
SECTION:A
----------------------
CHAPTER:03
PROBLEM:07
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
double V,Z,Degrees,I;

   cout<<"Enter Voltage : ";
   cin>>V;
   cout<<"Enter Impedence : ";
   cin>>Z;
   cout<<"Enter Angle : ";
   cin>>Degrees;

// converting degrees to radians
Degrees = Degrees*3.14159/180;
// AC circuits Ohm's Law: V = I⋅Z V-volts, I -current, Z -impendence
//V = I * Z
//I = V/Z
I = V/Z;


//for 1 phase and neutral
//Single phase Real Power P = V.I.cos φ
double P = V*I*cos(Degrees);
cout << "Real Power P =" << P << endl;


//Single phase Reactive Power Q = V.I.sin φ
double Q = V*I*sin(Degrees);
cout << "Reactive Power Q =" << Q << endl;


//Single phase Apparent power S
double S = V*I;
cout << "Apparent power S=" << S << endl;


//power factor=cosφ
double PF = cos(Degrees);
cout << "Power Factro PF = " << PF << endl;


return 0;
}
