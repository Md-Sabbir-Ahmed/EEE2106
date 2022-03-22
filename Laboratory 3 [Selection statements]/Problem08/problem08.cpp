/*
NAME: MD. SABBIR AHMED
ID:20200105021
SECTION:A
----------------------
CHAPTER:03
PROBLEM:08
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;

    // taking input the user for the coefficients of the quadratic equation
    cout << "Enter coefficients of the quadratic equation:\n";
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    // calculating  the discriminant using the given coefficients
    double discriminant = b * b - 4 * a * c;

    // if the discriminant is greater than zero
    // then the quadratic equation has 2 distinct and real roots
    if (discriminant > 0)
    {
        // calculating the first root
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        // calculating the second root
        double root2 = (-b - sqrt(discriminant)) / (2 * a);

        // display the roots
        cout << "\nThe quadratic equation has 2 distinct and real roots:\n";
        cout << "root 1 = " << root1 << "\n";
        cout << "root 2 = " << root2 << "\n";
    }
    // if the discriminant is equal to zero
    // then the quadratic equation has 2 equal and real roots
    else if (discriminant == 0)
    {
        // calculating  the root
        double root = -b / (2 * a);

        // display the roots
        cout << "\nThe quadratic equation has 2 equal and real roots:\n";
        cout << "root 1 = root 2 = " << root << "\n";
    }
    // if the discriminant is less than zero
    // then the quadratic equation has 2 distinct and complex roots
    else
    {
        // calculating the real part of the root
        double real = -b / (2 * a);
        // calculating the imaginary part of the root
        double imaginary = sqrt(-discriminant) / (2 * a);

        // display the roots
        cout << "\nThe quadratic equation has 2 distinct and complex roots:\n";
        cout << "root 1 = " << real << " + i" << imaginary << "\n";
        cout << "root 2 = " << real << " - i" << imaginary << "\n";
    }

    return 0;
}
