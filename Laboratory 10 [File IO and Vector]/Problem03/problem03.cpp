/*
NAME: MD. SABBIR AHMED
ID:20200105021
SECTION:A
----------------------
CHAPTER:10
PROBLEM:03
*/

//including  headers
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// main function
int main()
{
    // Creating a vector
    vector <string> myVector;

    //--------> ANS OF (a) <----------//
    // Printing empty vector
    cout<<"Printing empty vector: "<<endl;

    // Looping in the vector
   for(int i=0; i < myVector.size(); i++)
   {
       // Displaying elements
       cout<<myVector[i]<<endl;
   }


   //--------> ANS OF (b) <----------//
    // Appending elements to the vector
   myVector.push_back("Eggs");
   myVector.push_back("Milk");
   myVector.push_back("Sugar");
   myVector.push_back("Chocolate");
   myVector.push_back("Flour");


  // Printing vector elements
  cout<<endl<<"Vector elements after appending values: "<<endl;
   // Looping in the vector
   for(int i=0; i < myVector.size(); i++)
   {
       // Displaying elements
       cout<<myVector[i]<<endl;
   }

   //--------> ANS OF (c) <----------//
   // Removing element from the vector
   myVector.pop_back();

   // Printing vector elements
   cout<<endl<<"Vector elements after removing last element: "<<endl;
    // Looping in the vector
   for(int i=0; i < myVector.size(); i++)
   {
       // Displaying elements
       cout<<myVector[i]<<endl;
   }

   //--------> ANS OF (d) <----------//
   // Appending elements to the vector
   myVector.push_back("Coffee");

   // Printing vector elements
   cout<<endl<<"Vector elements after appending coffee: "<<endl;
    // Looping in the vector
   for(int i=0; i < myVector.size(); i++)
   {
       // Displaying elements
       cout<<myVector[i]<<endl;
   }


   //--------> ANS OF (e) <----------//
   // Looping in the vector
   for(int i=0; i < myVector.size(); i++)
   {
       // If element is Sugar
       if(myVector[i]=="Sugar")
       {
           // replacing it with Honey
           myVector[i] = "Honey";
       }

   }
   // Printing vector elements
   cout<<endl<<"Vector elements after replacing Sugar with Honey: "<<endl;
    // Looping in the vector
   for(int i=0; i < myVector.size(); i++)
   {
       // Displaying elements
       cout<<myVector[i]<<endl;
   }


   //--------> ANS OF (f) <----------//

   for(int i=0; i < myVector.size(); i++)
   {
       // If current element is milk
       if(myVector[i]=="Milk")
       {
           // removing it by using its index
           myVector.erase (myVector.begin()+i);
       }

   }
    // Printing vector elements
   cout<<endl<<"Vector elements after removing Milk: "<<endl;
    // Looping in the vector
   for(int i=0; i < myVector.size(); i++)
   {
       // Displaying elements
       cout<<myVector[i]<<endl;
   }



   //--------> ANS OF (g) <----------//

   // Using auto iterator to find Milk in the array
  auto itr = std::find(myVector.begin(), myVector.end(), "Milk");
  // If we are not at the end of the vector
  if (itr != myVector.end())
    {
        // Remove the occurence of "Milk"
        myVector.erase(itr);
    }

   // Printing vector elements
   cout<<endl<<"Vector elements after removing Milk: "<<endl;
    // Looping in the vector
   for(int i=0; i < myVector.size(); i++)
   {
       // Displaying elements
       cout<<myVector[i]<<endl;
   }
    return 0;
}
