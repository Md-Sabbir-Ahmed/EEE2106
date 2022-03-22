/*
NAME: MD. SABBIR AHMED
ID:20200105021
SECTION:A
----------------------
CHAPTER:08
PROBLEM:03
*/

//including  headers
#include <iostream>
using namespace std;
// main function
int main()
{
    int i=0,j=0;                    //declaring  i,j for iterating strings
    char s1[50],s2[50];             //declaring  s1,s2 strings
    cout<<"Enter first string : ";
    cin.getline(s1,50);             //read string s1 from user
    cout<<"Enter second string : ";
    cin.getline(s2,50);             //read string s2 from user

    while (s1[i] != '\0') {         //using while loop finding length of first string s1
        i++;
    }

    while (s2[j] != '\0') {         //using while loop appending string s2 to string s1
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';                   //end of the string add '\0' to know that is end of the string
    cout << "Concatenated string = " << s1;   //print string s1 which stores the Concatenated string

    return 0;
}
