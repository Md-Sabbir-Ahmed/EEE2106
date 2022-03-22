/*
NAME: MD. SABBIR AHMED
ID:20200105021
SECTION:A
----------------------
CHAPTER:08
PROBLEM:02
*/

//including  headers
#include <iostream>
#include <cstring>
using namespace std;

// main function
int main()
{
    char arr1[7]="SABBIR";//declaring + assigning string
    char arr2[7]; // declaring string
    for(int i=0; arr1[i]!='\0'; i++)
    {
        arr2[i]=arr1[i]; // copying string into arr2
    }
    cout<<arr2; // displaying string arr2
    return 0;
}
