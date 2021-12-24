#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"Enter three integers: ";
    cin>>n1>>n2>>n3;
    int min=n1;
    if(n2<min)
    {
      min=n2;
    }
    if(n3<min)
    {
        min=n3;
    }
    cout<<"The minimum is "<<min<<endl;
    return 0 ;
}
