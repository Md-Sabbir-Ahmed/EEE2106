#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3,n4,n5,result;
    cout<<"Enter five numbers: ";
    cin>>n1>>n2>>n3>>n4>>n5;
    result = (n1<n2?(n1<n3?(n1<n4?(n1<n5?n1:n5):(n4<n5?n4:n5)):(n3<n4?(n3<n5?n3:n5):(n4<n5?n4:n5))):(n2<n3?(n2<n4?(n2<n5?n2:n5):(n4<n5?n4:n5)):(n3<n4?(n3<n5?n3:n5):(n4<n5?n4:n5))));
    cout<<"The minimum number is : "<<result;
    return 0 ;

}

