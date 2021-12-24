#include<iostream>
using namespace std;
int main()
{

    int i ,j;
    cout<<"Enter First Number: ";
    cin>>i;
    cout<<"Enter Second Number: ";
    cin>>j;
    int add=0,sub=0,multiplication=0,div=0;
    add=i+j;
    sub=i-j;
    multiplication=i*j;
    div=i/j;
    cout<<"Addition = "<<add<<"\nSubtraction = "<<sub<<"\nDivision = "<<div<<"\nMultiplication = "<<multiplication<<endl;

    return 0 ;
}

