#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"Enter three integers: ";
    cin>>x>>y>>z;
    if(x<=y && x<=z)
    {
        cout<<"The minimum is "<<x<<endl;
    }
    if(y<=x && y<=z)
    {
        cout<<"The minimum is "<<y<<endl;
    }
    if(z<=x && z<=y)
    {
        cout<<"The minimum is "<<z<<endl;
    }
    return 0 ;
}
