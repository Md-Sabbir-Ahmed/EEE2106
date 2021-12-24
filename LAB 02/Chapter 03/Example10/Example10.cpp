#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter any number to check even or odd: ";
    cin>>num;
    switch(num%2)
    {
    case 0:
        cout<<"Number is Even";
        break;

    case 1:
        cout<<"Number is Odd";
        break;
    }
    return 0 ;
}



