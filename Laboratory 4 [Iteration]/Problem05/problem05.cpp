/*
NAME: MD. SABBIR AHMED
ID:20200105021
SECTION:A
----------------------
CHAPTER:04
PROBLEM:05
*/
#include <iostream>
using namespace std;
int main()
{
    int l;
    cout<<"Enter the lower range : ";
    cin>>l;
    int l1=l;
    int h;
    cout<<"Enter the higher range : ";
    cin>>h;
    int sum=0;
    do
    {
        if(l%2==0)
        {
            sum+=l;
        }
        l++;
    }
    while(l<=h);
    cout<<"Sum of the even numbers between "<<l1<<" and "<<h<<" using do while loop is : "<<sum;
    return 0;
}
