/*
NAME: MD. SABBIR AHMED
ID:20200105021
SECTION:A
----------------------
CHAPTER:05
PROBLEM:06
*/
#include <iostream>
using namespace std;
// function to calculate power of x raised to p
double power(double x,int p) {
    double result=1;
    // to calculate positive power
    if(p>0) {
        // multiply x, p times
        for(int i=0;i<p;i++)
            result*=x;
    }
    // to calculate negative power
    else if(p<0) {
        // multiply x, p times
        for(int i=0;i<-p;i++)
            result*=x;
        // take reciprocal of result
        result=1/result;
    }
    return result;
}
int main() {
    // test function
    cout<<"2^3: "<<power(2,3)<<endl;
    cout<<"3^2: "<<power(3,2)<<endl;
    cout<<"3^0: "<<power(3,0)<<endl;
    cout<<"2^-1: "<<power(2,-1)<<endl;
    cout<<"2^-2: "<<power(2,-2)<<endl;
    return 0;
}
