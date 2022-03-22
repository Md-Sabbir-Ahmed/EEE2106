/*
NAME: MD. SABBIR AHMED
ID:20200105021
SECTION:A
----------------------
CHAPTER:05
PROBLEM:03
*/
#include <iostream>
#include<cmath>
using namespace std;
 // method to check whether the number if perfect square or not
int is_square(int  n)
{

    if (n >= 0) {

        int sqr = sqrt(n);

        return (sqr * sqr == n);
    }

    return false;
}
 // main function
int main()
{
    int n ;
    cout<<"Enter the value of n: ";
    cin>>n;
    if (is_square(n)==1)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
