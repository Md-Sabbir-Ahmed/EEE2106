/*
NAME: MD. SABBIR AHMED
ID:20200105021
SECTION:A
----------------------
CHAPTER:06
PROBLEM:01
*/

//including  headers
#include<iostream>
using namespace std;
//Funtion which will return the minimum float value among n element
float min(float a[],int n)
{
    float minimum=a[0];// assuming 1st element as smallest
    for(int i=0;i<n;i++)
    {
        if(minimum>a[i]) // comparing elements
        {
            minimum=a[i];//storing the lowest element
        }
    }
    return minimum;// returning the smallest element
}
int main()
{
    float a[]={3.5,2.6,2.1}; // float declaration & initialization
    cout<<min(a,3);// calling function
}
