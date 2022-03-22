/*
NAME: MD. SABBIR AHMED
ID:20200105021
SECTION:A
----------------------
CHAPTER:04
PROBLEM:07
*/
#include<iostream>

using namespace std;

int main()
{
    int num,rem,sum,count=0;

    cout<<"Enter the number:";

    cin>>num;

    for(sum=0; num>0; num=num/10)

    {

        rem=num%10;

        sum=sum+rem;
        count++;

    }
    float average= float(sum)/count;

    cout<<"\nSum of digits="<<sum<<endl;
    cout<<"\nAverage="<<average<<endl;


    return 0;

}


