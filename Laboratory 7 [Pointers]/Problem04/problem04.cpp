/*
NAME: MD. SABBIR AHMED
ID:20200105021
SECTION:A
----------------------
CHAPTER:07
PROBLEM:04
*/

//including  headers
#include <iostream>
using namespace std;

// function from given question
void sort(float* p[],int n){

  // float pointer
        float* temp;

  // for loop from i=1 to i = n-1
        for(int i=1;i<n;i++){
                for(int j=0;j<n-i;j++){

      // if value1 is greater than value2 swap, them
                        if(*p[j] > *p[j+1]){
                                temp = p[j];
                                p[j] = p[j+1];
                                p[j+1] = temp;
                        }
                }
        }


}

// main function
int main()
{
  // size of array
        int n = 6;

  // array of float type
        float arr[] = {1.0, 6.0, 4.0, 5.0, 2.3, 7.8};

  // array of pointers
  float* p[n];

  // storing address of arr element into pointer array
        for(int i=0;i<n;i++)
        {
            p[i] = &arr[i];
        }


  //calling sort function (bubble sort)
        sort(p,n);

  // printing elements of sorted array
      for(int i=0;i<n;i++)
        {
            cout<<*p[i]<<" ";
        }


        return 0;
}
