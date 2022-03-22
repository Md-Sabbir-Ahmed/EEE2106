/*
NAME: MD. SABBIR AHMED
ID:20200105021
SECTION:A
----------------------
CHAPTER:09
PROBLEM:03
*/
#include <iostream>
using namespace std;

//class Time
class Time
{
   //data members of the class
   int hours;
   int minutes;
   int seconds;

//public functions of the class
public:

   //class constructor
   Time(){}

   //function to set the time
   void setTime(int h, int m, int s)
   {
       //set the values
       hours=h;
       minutes=m;
       seconds=s;

   }

   //function to advance the time
   void advance(int h, int m, int s)
   {
       //advance the values
       hours=hours+h;
       minutes=minutes+m;
       seconds=seconds+s;
   }

   //function to reset
   void resset(int h, int m, int s)
   {
       //reset with the new values
       hours=h;
       minutes=m;
       seconds=s;
   }

   //function show
   void show()
   {
       //display th time
       cout<<"\nThe current time is: ";
       cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
   }

};

//main program
int main()
{
   //create the object of the class
   Time timeObj;

   //set the time
   timeObj.setTime(12, 15, 30);

   //show the time
   timeObj.show();

   //advance the time
   timeObj.advance(11,1,1);

   //show the time
   timeObj.show();

   //reset with new value
   timeObj.resset(5,13,55);

   //show the time
   timeObj.show();



   return 0;
}
