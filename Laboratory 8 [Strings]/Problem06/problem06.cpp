/*
NAME: MD. SABBIR AHMED
ID:20200105021
SECTION:A
----------------------
CHAPTER:08
PROBLEM:06
*/

//including  headers
#include<iostream>
#include<cstring>
using namespace std;
// main function
int main()
{

    char str[] = "Today is Friday.";
    int length= strlen(str);//size of string
    for(int i=length;i>=0;i--)//iterating from last index to first index
    {
        cout<<str[i];
    }

    return 0;
}
