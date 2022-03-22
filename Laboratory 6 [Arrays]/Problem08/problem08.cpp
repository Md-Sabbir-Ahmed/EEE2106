/*
NAME: MD. SABBIR AHMED
ID:20200105021
SECTION:A
----------------------
CHAPTER:06
PROBLEM:08
*/
#include<iostream>
#include<cmath>
using namespace std;

double stdev(int x[],int n) {
                double mean, sum = 0, squareSum = 0;
                double stddev;
                // calculating the standard deveation
                // Calculating mean of numbers
                for (int i = 0; i < n; i++) {
                        sum += x[i];

                }
                mean = sum / n;
                // Standard deviation logic
                for (int i = 0; i < n; i++) {
                        squareSum += pow(x[i] - mean, 2);
                }
                squareSum=squareSum/n;
                stddev = sqrt(squareSum) ;
                return stddev;

}



int main(){
    int arr[]={10,2,5,15,20};
    cout<<stdev(arr,5);
}
