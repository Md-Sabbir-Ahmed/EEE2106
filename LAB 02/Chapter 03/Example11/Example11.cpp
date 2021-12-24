#include<iostream>
using namespace std;
int main()
{
    cout<<" Basic Calculator   "<<endl;
    cout<<"------------------  "<<endl;
    cout<<"  [1] Addition      "<<endl;
    cout<<"  [2] Substraction  "<<endl;
    cout<<"  [3] Multiplication"<<endl;
    cout<<"  [4] Division      "<<endl;
    float num1,num2,result;
    int choice;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    cout<<"Enter your choice[1/2/3/4]: ";
    cin>>choice;
    switch(choice)
    {
    case 1:
        result=num1+num2;
        cout<<"Summation = "<<result;
        break;
    case 2:
        result=num1-num2;
        cout<<"Substraction = "<<result;
        break;
    case 3:
        result=num1*num2;
        cout<<"Multiplication = "<<result;
        break;
    case 4:
        result=num1/num2;
        cout<<"Division = "<<result;
        break;
    default:
        cout<<"Invalid choice!"<<endl;
    }
    return 0 ;
}
