#include<iostream>
#include<cmath>
using namespace std;
int main()
{

    int a,b,c;
    cout<<"Enter Opposite: ";
    cin>>a;
    cout<<"Enter Adjacent: ";
    cin>>b;
    c=sqrt(pow(a,2)+pow(b,2));
    cout<<"Hypotenuse = "<<c;
    return 0 ;
}

