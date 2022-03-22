/*
NAME: MD. SABBIR AHMED
ID:20200105021
SECTION:A
----------------------
CHAPTER:05
PROBLEM:07(b)
*/
#include <iostream>
#include<cmath>
using namespace std;
//function to calculate the factorial of a number
int factorial(int n)
{
//if value of n is 0 or 1
if(n==1||n==1)
{
return 1;
}
//if value of n is more than 1
else
{
return n*factorial(n-1);
}
}
//function to calculate the sum of series
float series(int n,float x)
{
//declaring the required variables
float sum=1;
//loop to iterate the series
for(int i=1;i<n;i++)
{
//calculating the value of series
sum += pow(x,i*2)/factorial(i*2);
}
//return the value of series
return sum;
}
//driver code
int main()
{
//declaring the required variables
float x,ans;
int n;
//taking the value of n
cout<<"Enter the value of n( number of terms ) : ";
cin>>n;
//taking the value of x
cout<<"Enter the value of x : ";
cin>>x;
//calling the function
ans = series(n,x);
//printing the value of series
cout<<"The value of series 1 + x^2/2! + x^4/4! +.. is : "<<ans;
}
