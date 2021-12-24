#include<iostream>
using namespace std;
int main()
{
    int x,y,z,result;
    cout<<"Enter three integers: ";
    cin>>x>>y>>z;
    result=((x<y)?(x<z?x:z):(y<z?y:z));
    cout<<result<<" is the minimum"<<endl;
    return 0 ;
}
