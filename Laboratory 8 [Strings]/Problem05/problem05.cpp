/*
NAME: MD. SABBIR AHMED
ID:20200105021
SECTION:A
----------------------
CHAPTER:08
PROBLEM:05
*/

//including  headers
#include<iostream>
using namespace std;
// main function
int main()
{
    char str[] = "A B CD  E FGHIJ ";
    int count = 0;

    for (int i = 0; str[i]; i++)
    {
        if (str[i] != ' ')
        {
            str[count++] = str[i]; // here count is
                                   // incremented
        }
    }
    str[count] = '\0';
    cout << str<<endl;
    return 0;
}
