#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3,n4,n5,smallest,largest;
    cout<<"Enter five numbers: ";
    cin>>n1>>n2>>n3>>n4>>n5;
    smallest = (n1<n2?(n1<n3?(n1<n4?(n1<n5?n1:n5):(n4<n5?n4:n5)):(n3<n4?(n3<n5?n3:n5):(n4<n5?n4:n5))):(n2<n3?(n2<n4?(n2<n5?n2:n5):(n4<n5?n4:n5)):(n3<n4?(n3<n5?n3:n5):(n4<n5?n4:n5))));
    largest= (n1>n2?(n1>n3?(n1>n4?(n1>n5?n1:n5):(n4>n5?n4:n5)):(n3>n4?(n3>n5?n3:n5):(n4>n5?n4:n5))):(n2>n3?(n2>n4?(n2>n5?n2:n5):(n4>n5?n4:n5)):(n3>n4?(n3>n5?n3:n5):(n4>n5?n4:n5))));
    cout<<"Smallest = "<<smallest<<endl;
    cout<<"Largest = "<<largest<<endl;

    return 0 ;

}

