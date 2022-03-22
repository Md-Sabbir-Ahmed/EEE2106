/*
NAME: MD. SABBIR AHMED
ID:20200105021
SECTION:A
----------------------
CHAPTER:07
PROBLEM:02
*/

//including  headers
#include<iostream>
using namespace std;

//Function for swapping for values
void swap(int *a,int *b,int *c,int *d)
{
    int temp1,temp2;
    temp1=*a;
    temp2=*b;
    *a=*d;//4th value in the 1st position
    *b=*c;//3rd value in the 2nd position
    *c=temp2;//2nd value in the 3rd position
    *d=temp1;//1st value in the 4th position
}
//main function
int main(){
    int a,b,c,d;
    cout<<"Enter Values of a b c d :";
    cin>>a>>b>>c>>d; // taking input
    cout<<"Values before swapping: ";
    cout<<a<<" , "<<b<<" , "<<c<<" , "<<d<<endl;
    swap(&a,&b,&c,&d); // calling function
    cout<<"Values after  swapping: ";
    cout<<a<<" , "<<b<<" , "<<c<<" , "<<d<<endl;
}
