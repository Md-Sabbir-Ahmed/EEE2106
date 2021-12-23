#include<iostream>
#include<cmath>
using namespace std;
int main()
{

    double param , result;
    param = 10.57;
    result = abs(param);
    cout<<"Absolute value of 10.57 is "<< result << endl ;
    param = -10.57;
    result = abs(param);
    cout<<"Absolute value of -10.57 is "<< result << endl ;
    param=25;
    result = sqrt(param);
    cout<<"Square root of 25 is "<< result << endl ;
    cout<<"Value of 2^4 is "<<pow(2,4)<<endl;
    cout<<"Value of e^5 is "<<exp(5)<<endl;
    cout<<"Value of ln(10) is "<<log(10)<<endl;
    cout<<"Value of log(10) is "<<log10(10)<<endl;
    return 0 ;
}

