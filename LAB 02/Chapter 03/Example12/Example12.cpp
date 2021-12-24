#include<iostream>
using namespace std;
int main()
{
    int x,y,result;
    cout<<"Enter two integers: ";
    cin>>x>>y;
    result=(x<y)?x:y;
    cout<<result<<" is the minimum"<<endl;
    return 0 ;
}
