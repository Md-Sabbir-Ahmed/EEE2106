#include<iostream>
using namespace std;
int main()
{

    float mark;
    cout<<"Enter your Mark: ";
    cin>>mark;
    if(mark<0 || mark >100)
    {
        cout<<"Invalid Mark ";
    }
    else if(mark>=80)
    {
        cout<<"A+";
    }
    else if(mark>=75 && mark<80)
    {
        cout<<"A";
    }
    else if(mark>=70 && mark<75)
    {
        cout<<"A-";
    }
    else if(mark>=65 && mark<70)
    {
        cout<<"B+";
    }
    else if(mark>=60 && mark<65)
    {
        cout<<"B";
    }
    else if(mark>=55 && mark<60)
    {
        cout<<"B-";
    }
    else if(mark>=50 && mark<55)
    {
        cout<<"C+";
    }else if(mark>=45 && mark<50)
    {
        cout<<"C";
    }
    else if(mark>=40 && mark<45)
    {
        cout<<"D";
    }
    else
    {
        cout<<"F";
    }

    return 0 ;
}
