/*
NAME: MD. SABBIR AHMED
ID:20200105021
SECTION:A
----------------------
CHAPTER:06
PROBLEM:05
*/
#include <iostream>
using namespace std;

bool firstRepeat(int ar[],int n,int & num){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(ar[i]==ar[j]){
                num=ar[i];
                return true;
            }
        }
    }
    return false;
}
int main() {
    int ar1[]={1,2,3,4,5,5,6,6};
    int num;
    if(firstRepeat(ar1,7,num)){
        cout<<"Repeated number found: "<<num<<endl;
    }else{
        cout<<"Repeated number not found\n";
    }

}
