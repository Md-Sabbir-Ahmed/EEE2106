/*
NAME: MD. SABBIR AHMED
ID:20200105021
SECTION:A
----------------------
CHAPTER:07
PROBLEM:01
*/

//including  headers
#include<iostream>
using namespace std;
//Function to return sum of first n float pointers
 float sum(float*p[],int n)
 {
     //variable to store the answer
     int ans=0;
     //pointer pointing to first pointer of array
     float*temp=*p;

     //while n not equal to zero
     while(n!=0)
     {
         //storing the value in answer
         ans+=*temp;
         //temp now pointing to the next pointer
         temp++;
         //decrementing n
         n--;
     }
     //returning final answer
     return ans;
 }

 int main()
 {
     //sample array
     float arr[]={3,5,6,1,2};
     //finding size of array
     int s=sizeof(arr)/sizeof(arr[0]);
     //float pointer
     float*p[s];
     //initializing the pointers
     for(int i=0;i<s;i++)
     {
         p[i]=&arr[i];
     }
     //calling the function
     cout<<sum(p,4);
 }
