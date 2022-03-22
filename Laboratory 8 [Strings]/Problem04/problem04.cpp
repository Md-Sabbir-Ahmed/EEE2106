/*
NAME: MD. SABBIR AHMED
ID:20200105021
SECTION:A
----------------------
CHAPTER:08
PROBLEM:04
*/

//including  headers
#include<iostream>
#include<string.h>
using namespace std;
// main function
int main()
{
    char str[100] = "MD. SABBIR AHMED";
    int vowels = 0; //   vowel count integer

    for(int i = 0; str[i]!='\0'; i++)
    {
        if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'
        ||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O' ||str[i]=='U')
        {
                    vowels++;
        }
    }
    // printing  total vowels
    cout << "Total Vowels : " << vowels;

    return 0;
}
