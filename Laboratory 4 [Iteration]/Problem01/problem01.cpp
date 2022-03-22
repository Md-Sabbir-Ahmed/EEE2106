/*
NAME: MD. SABBIR AHMED
ID:20200105021
SECTION:A
----------------------
CHAPTER:04
PROBLEM:01
*/
#include <iostream>
using namespace std;

int main() {

  int n;
  bool is_prime = true;

  cout << "Enter a positive integer: ";
  cin >> n;

  // 0 and 1 are not prime numbers
  if (n == 0 || n == 1) {
    is_prime = false;
  }

  // loop to check if n is prime
  int i=2;
  while(i<=n/2)
  {
      if (n % i == 0) {
      is_prime = false;
      break;
    }
    i++;
  }

  if (is_prime)
    cout << n << " is a prime number";
  else
    cout << n << " is not a prime number";
}

