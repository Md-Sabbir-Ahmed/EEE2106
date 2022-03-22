/*
NAME: MD. SABBIR AHMED
ID:20200105021
SECTION:A
----------------------
CHAPTER:04
PROBLEM:09
*/
#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    int n, sum=1;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=2; i<=n; i=i+2)
    {
        sum=sum+pow(i,i);
    }
    cout<<"Sum is : "<<sum;
}

