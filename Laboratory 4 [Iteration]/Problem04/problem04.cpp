/*
NAME: MD. SABBIR AHMED
ID:20200105021
SECTION:A
----------------------
CHAPTER:04
PROBLEM:04
*/
#include <iostream>
using namespace std;

int main()
{
    int n,f=1,i=1;

    cout <<"Enter the number to find factorial :";

    cin>>n;

    do
    {
        i++;

        f=f*i;

    }
    while(i!=n);

    cout<<"Factorial is :"<<f;

}
