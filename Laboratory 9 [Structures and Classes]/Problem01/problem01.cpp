/*
NAME: MD. SABBIR AHMED
ID:20200105021
SECTION:A
----------------------
CHAPTER:09
PROBLEM:01
*/

//Class Declaration
#include<iostream>
using namespace std;
class romanType
{
public :
romanType( string = "" );
void setRoman( string );
void convertToDecimal();
void printRoman();
void printDecimal();

private:
string roman;
int decimal;
}; // end class definition of romanType
romanType::romanType( string myRoman )
{
roman = myRoman;
decimal = 0;
} // end constructor romanType

void romanType::setRoman( string myRoman )
{
roman = myRoman;
decimal = 0;
} // end function setRoman

void romanType::convertToDecimal()
{
char romans[7] = { 'M', 'D', 'C', 'L', 'X', 'V', 'I'};
int decimals[ 7 ] = { 1000, 500, 100, 50, 10, 5, 1 };
int j, pos;

size_t len = roman.length();

// process the numeral
for ( unsigned int i = 0; i < len - 1; i++ )
{
  // find the roman letter
  for ( pos = 0; pos < 7; pos++ )
   if ( roman.at( i ) == romans[ pos ] )
    break;

  // check for validity of the roman letter
  if ( pos < 7 )
  {
   // check the next roman letter's value
   for ( j = 0; j < pos; j++ )
    if ( roman.at( i + 1 ) == romans[ j ] )
      break;

   // add or subtract the dec. val
   // according to the values of j and pos
   if ( j == pos )
    decimal += decimals[ pos ];
   else
    decimal -= decimals[ pos ];
  }
} // end for

// process the last numeral value
for ( j = 0; j < 7; j++ )
  if ( roman.at( len - 1 ) == romans[ j ] )
   break;
//add the dec. val of roman letter to the dec. number
decimal += decimals[ j ];

} // end function convertToDecimal

void romanType::printRoman()
{
cout <<"\nroman   : " << roman<<endl;
} // end function printRoman

void romanType::printDecimal()
{
cout << "Decimal : " << decimal<<endl;
} // end function printDecimal

/* Main method to test the class*/
int main() // function main begins program execution
{
// let the user know about the program
cout <<"Program that convert Roman Numeral"
   << " into decimal form.\n";

// instantiate object of type romanType
romanType r;

string rns[ 3 ] = { "CCCLIX", "MCXIV", "MDCLXVI" };

for ( int i = 0; i < 3; i++ )
{
  // set the roman numeral string
  r.setRoman( rns[ i ] );

  // convert the roman numeral into decimal form
  r.convertToDecimal();

  // print the roman numeral
  r.printRoman();

  // print the decimal form of numeral
  r.printDecimal();
} // end for

cout << "\n\n\t";

return 0; // indicate program executed successfully
}   // end of function, main
