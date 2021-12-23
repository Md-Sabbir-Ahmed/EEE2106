#include<iostream>
#include<cmath>
using namespace std;
int main()
{

    float radius , area , circum , PI = 3.14159;
    cout << "Input the radius(1/2 of diameter) of a circle : ";
    cin >> radius;
    circum = 2*PI*radius;
    area = PI*pow(radius,2);
    cout << "The area of the circle is : " << area << endl;
    cout << "The circumference of the circle is : " << circum << endl;
    cout << endl;

    return 0 ;
}

