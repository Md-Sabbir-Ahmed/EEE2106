/*
NAME: MD. SABBIR AHMED
ID:20200105021
SECTION:A
----------------------
CHAPTER:04
PROBLEM:06
*/
#include <iostream>
using namespace std;

int main()
{
    int sum=0;
    int i,n=10,num;

    for(i=0;i<n;i++)
    {
        cin>>num;
        if(num<0)
        {
            break;
        }
        sum=sum+num;
    }
    cout<<sum;

    return 0;
}

