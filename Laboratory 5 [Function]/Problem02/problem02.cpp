/*
NAME: MD. SABBIR AHMED
ID:20200105021
SECTION:A
----------------------
CHAPTER:05
PROBLEM:02
*/

#include <iostream>
#include <conio.h>// a header file to provide console input/output
using namespace std;


//function declaration
int min(int,int,int,int);

int main()
{
//declare the variables
   int num1,num2,num3,num4;

cout<<"Enter the first number: ";
cin>>num1;//get input from user for num1
cout<<"Enter the second number: ";
cin>>num2;//get input from user for num2
cout<<"Enter the third number: ";
cin>>num3;//get input from user for num3
cout<<"Enter the fourth number: ";
cin>>num4;//get input from user for num4

//function call
min(num1,num2,num3,num4);



return 0;
} // main ends here

// function definition
int min(int num1,int num2,int num3,int num4){
if(num1<num2&&num1<num3&&num1<num4){
cout<<"\nSmallest number is: " <<num1;
}
else if(num2<num1&&num2<num3&&num2<num4){
cout<<"\nSmallest number is: "<<num2;
}
else if(num3<num1&&num3<num2&&num3<num4){
cout<<"\nSmallest number is: "<<num3;
}
else{
cout<<"\nSmallest number is: "<<num4;
}

}//min() function ends here
