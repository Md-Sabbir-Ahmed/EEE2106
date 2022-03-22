/*
NAME: MD. SABBIR AHMED
ID:20200105021
SECTION:A
----------------------
CHAPTER:09
PROBLEM:02
*/
#include <iostream>
using namespace std;
//defining enum for days
enum day { Sun = 1, Mon, Tue, Wed, Thur, Fri, Sat};

//defining class
class dayType
{

day name; //starting with 1 for sunday, 2 for monday etc 7 for saturday

  //method for returning days
string getDayAsString(int d)
{
switch(d)
{
case 1:
return "Sunday";
break;
case 2:
return "Monday";
break;
case 3:
return "Tuesday";
break;
case 4:
return "Wednesday";
break;
case 5:
return "Thursday";
break;
case 6:
return "Friday";
break;
case 7:
return "Saturday";
break;
default:
return "not valid day";
}
}

public:
//default constructor
dayType()
{
name = Sun;
}
//parameterized constructor, Sun for Sunday, Mon for Monday..
dayType(day dname)
{
setDay(dname);
}
  //get method for getting day name
string getDay()
{
return getDayAsString(name);
}

int getDayNumber()
{
return name;
}

void setDay(day dname)
{
name = dname;
}

void print()
{
cout << getDayAsString(name);
}
  //method for next day
string nextDay()
{
int next = name + 1;
if(next > 7)
next = 1;

return getDayAsString(next);
}
  //method for previous day
string previousDay()
{
int prev = name - 1;
if(prev < 1)
prev = 7;

return getDayAsString(prev);
}
//method for calculating days after adding days
string dayAfterAdd(int n)
{
    int d=name+n;
    if(d>7)
    {
        d=d-7;
    }
    return getDayAsString(d);
}
};
//driver main method
int main()
{
dayType today(Sun); //create a daytype for wednesday

cout << "today is set to: " << today.getDay() << endl;
cout << "yesterday was: " << today.previousDay() << endl;
cout << "tomorrow is: " << today.nextDay() << endl;
cout << "day after adding three days: " << today.dayAfterAdd(3) << endl;

}
