/*
NAME: MD. SABBIR AHMED
ID:20200105021
SECTION:A
----------------------
CHAPTER:04
PROBLEM:03
*/
#include <iostream>
using namespace std;

int main()
{

    int n,f,f1=-1,f2=1;
    cout<<"Enter n: ";
    cin>>n;
    cout<<endl;

    cout <<"The Fibonacci Series is:";

    do
    {

        f=f1+f2;

        f1=f2;

        f2=f;

        cout <<"  "<<f;

        n--;

    }
    while(n>0);
}
