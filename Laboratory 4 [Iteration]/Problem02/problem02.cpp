/*
NAME: MD. SABBIR AHMED
ID:20200105021
SECTION:A
----------------------
CHAPTER:04
PROBLEM:02
*/
#include <iostream>
using namespace std;

int main() {

  int n,sum=0;
  cout<<"Enter the value of n: ";
  cin>>n;
  int i=1;
  while(i<=n)
  {
      sum=sum+i*i;
      i=i+2;
  }
  cout<<"The sum is: "<<sum;
}


