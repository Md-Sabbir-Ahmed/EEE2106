/*
NAME: MD. SABBIR AHMED
ID:20200105021
SECTION:A
----------------------
CHAPTER:03
PROBLEM:03
*/
#include<iostream>
using namespace std;
int main()
{

    int year;
    cout<<"Enter year: ";
    cin>>year;
    if(year%4==0 && year%100!=0 || year%400==0)
    {
        cout<<"Leap Year ";
    }
    else{
        cout<<"Not Leap Year ";
    }

    return 0 ;
}

