/*
NAME: MD. SABBIR AHMED
ID:20200105021
SECTION:A
----------------------
CHAPTER:03
PROBLEM:01
*/
#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your Age: ";
    cin>>age;
    if(age<18)
    {
        cout<<"You are a child ";
    }
    else if(age>=18 && age<=65)
    {
        cout<<"You are an adult ";
    }
    else
    {
        cout<<"You are a senior citizen";
    }
    return 0 ;
}

