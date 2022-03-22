/*
NAME: MD. SABBIR AHMED
ID:20200105021
SECTION:A
----------------------
CHAPTER:02
PROBLEM:06
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{

    int x1,x2,y1,y2,distance;
    cout<<"Enter the value of X1: ";
    cin>>x1;
    cout<<"Enter the value of X2: ";
    cin>>x2;
    cout<<"Enter the value of Y1: ";
    cin>>y1;
    cout<<"Enter the value of Y2: ";
    cin>>y2;

    distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    cout<<"Distance = "<<distance<<endl;

    return 0 ;
}


