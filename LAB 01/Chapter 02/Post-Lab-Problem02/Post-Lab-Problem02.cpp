#include<iostream>
using namespace std;
int main()
{

    int w,l,area,perimeter;
    cout<<"Enter Width : ";
    cin>>w;
    cout<<"Enter Length : ";
    cin>>l;
    area=w*l;
    perimeter=2*(w+l);
    cout<<"Area = "<<area<<"\nPerimeter = "<<perimeter<<endl;
    return 0 ;
}

