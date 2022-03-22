/*
NAME: MD. SABBIR AHMED
ID:20200105021
SECTION:A
----------------------
CHAPTER:08
PROBLEM:01
*/

//including  headers
#include <iostream>
#include <cstring>
using namespace std;
// main function
int main ()
{
    //declaring character arrays and assigning their values
    char S1[] = "AUST", S2[] = "aust", S3[] = "AUST";
    int result;//declaring integer

    result = strcmp(S1, S2);//comparing 1st character array with 2nd one
    cout << "strcmp(S1 , S2) = " << result << endl;

    result = strcmp(S2, S3);//comparing 2nd character array with 3rd one
    cout << "strcmp(S2 , S3) = " << result << endl;

    result = strcmp(S3, S1);//comparing 3rd character array with 1st one
    cout << "strcmp(S3 , S1) = " << result << endl; // S3 & S1 are same so it displays 0
}
