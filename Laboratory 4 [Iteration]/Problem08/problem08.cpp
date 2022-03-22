/*
NAME: MD. SABBIR AHMED
ID:20200105021
SECTION:A
----------------------
CHAPTER:04
PROBLEM:08
*/

#include<iostream>
using namespace std;



int main()
{
    int n , sum=0 ,k=0;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=1;i<=n;i=i+2)
    {
        if(k%2==0)
        {
            sum=sum+i*i;
        }
        else{
            sum=sum-i*i;
        }
        k++;
    }
    cout<<"Sum is : "<<sum;
}
