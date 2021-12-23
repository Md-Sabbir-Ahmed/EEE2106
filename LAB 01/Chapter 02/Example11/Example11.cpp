#include<iostream>
using namespace std;
int main()
{

    int m,n;
    m=44;
    n=++m;
    cout<<"Prefix increment: \t m= "<< m <<" and n = "<< n <<endl;
    m=44;
    n=m++;
    cout<<"Postfix increment: \t m= "<< m <<" and n = "<< n <<endl;
    m=44;
    n=--m;
    cout<<"Prefix decrement: \t m= "<< m <<" and n = "<< n <<endl;
    m=44;
    n=m--;
    cout<<"Postfix decrement: \t m= "<< m <<" and n = "<< n <<endl;
    return 0 ;
}

