/*
NAME: MD. SABBIR AHMED
ID:20200105021
SECTION:A
----------------------
CHAPTER:06
PROBLEM:03
*/


#include<iostream>
using namespace std;

int main()

{

    int nums[] = {4, 5, 9, 12, 9, 22,45,45, 45, 7};
    int n = sizeof(nums)/sizeof(nums[0]);

    int i, j, maxElement, k;
     int maxCount = 0;
    /* Frequency of each element is counted and checked.If it's greater than the utmost k element we found till now, then it is updated accordingly  */
    for(i = 0; i< n; i++)   //For loop to hold each element
    {
        k = 1;
        for(j = i+1; j < n; j++)  //For loop to check for duplicate elements
        {
            if(nums[j] == nums[i])
            {
                k++;     //Increment  k
                /* If k of current element is more than
                maxCount, then update maxElement */
                if(k > maxCount)
                {
                    maxElement = nums[j];
                }
            }
        }
    }


    cout<<"most occurring element is: "<<maxElement;
}

