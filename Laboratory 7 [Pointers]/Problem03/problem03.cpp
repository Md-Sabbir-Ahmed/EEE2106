/*
NAME: MD. SABBIR AHMED
ID:20200105021
SECTION:A
----------------------
CHAPTER:07
PROBLEM:03
*/

//including  headers
#include <iostream>

using namespace std;

// Function used to get the number of elements & elements from user
void get(double *&a, int& n)
{
    // Loop counter
    int x;

    // Taking the total number of elements user wants to enter
    cout << "How many numbers will you type?" << endl;
    cin >> n;

    // Allocating memory to array for n elements
    a = new double[n];

    cout << "Enter " << n << " numbers:" << endl;

    // Loop to take n elements from user
    for(x = 0; x < n; x++)
    {
        // Taking the element from user
        cin >> a[x];
    }
}

// Function used to print the array entered by user
void print(double *a, int n)
{
    // Loop counter
    int x;

    cout << "You typed: ";

    // Loop for each element of array
    for(x = 0; x < n; x++)
    {
        // Printing array element
        cout << a[x] << " ";
    }

    cout << endl;
}

// main Function
int main()
{
    // Used to store total number of element
    int n;

    // Used to store array elements
    double *a;

    // Calling function to get the number of elements & elements from user
    get(a, n);

    // Calling function to print the array entered by user
    print(a, n);

    // Deallocating the memory
    delete a;

    return 0;
}
