/*
NAME: MD. SABBIR AHMED
ID:20200105021
SECTION:A
----------------------
CHAPTER:06
PROBLEM:02
*/

//including  headers
#include<iostream>
using namespace std;

//bubble sort algorithm ; reference : example_06
void bubble_sort(int array[],int size)
{
    for(int step=0;step<size-1;++step)
    {
        for(int i=0;i<size-step-1;++i){
        if(array[i]>array[i+1])
        {
            int temp=array[i];
            array[i]=array[i+1];
            array[i+1]=temp;
        }
    }
  }
  cout<<"First Largest Element: "<<array[size-1]<<endl;
  cout<<"Second Largest Element: "<<array[size-2]<<endl;
  cout<<"Third Largest Element: "<<array[size-3]<<endl;
}


int main()
{
    int arr[] = {12, 45, 1, -1, 54, 23, 5, 0, -10}; // array declaration & initialization
    int n = sizeof(arr)/sizeof(arr[0]); // size of array
    bubble_sort(arr, n);// calling function
}
