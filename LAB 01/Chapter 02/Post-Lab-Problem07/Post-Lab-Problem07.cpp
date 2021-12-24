#include<iostream>
#include<cmath>
using namespace std;
int main()
{

    float a,b,c,D,x1,x2;
    cout<<"Enter a= ";
    cin>>a;
    cout<<"Enter b= ";
    cin>>b;
    cout<<"Enter c= ";
    cin>>c;
    D=(b*b)-(4*a*c);
    x1= (-b+sqrt(D))/(2*a);

    x2= (-b-sqrt(D))/(2*a);
    cout<<"The equation is: "<<a<<"*x*x+"<<b<<"*x+"<<c<<"=0"<<endl;
    cout<<"X1 = "<<x1<<" X2 = "<<x2<<endl;

    return 0 ;
}

