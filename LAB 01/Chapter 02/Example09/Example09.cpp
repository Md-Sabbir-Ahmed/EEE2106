#include<iostream>
using namespace std;
int main()
{

    int p,r,t,i;
    cout << "Input the Principle: ";
    cin >> p;
    cout << "Input the Rate of Interest: ";
    cin >> r;
    cout << "Input the Time: ";
    cin >> t;
    i=(p*r*t)/100;
    cout << "The Simple interest for the amount " << p << " for ";
    cout << t << " years @ " << r << " % is: " << i << endl;
    return 0 ;
}

