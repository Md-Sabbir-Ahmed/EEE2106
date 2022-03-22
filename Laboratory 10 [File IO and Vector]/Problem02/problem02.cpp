/*
NAME: MD. SABBIR AHMED
ID:20200105021
SECTION:A
----------------------
CHAPTER:10
PROBLEM:02
*/

//including  headers
#include<iostream>
#include<fstream>
#include <sstream>
using namespace std;
// main function
int main()
{
    string s;
    // open file
    ifstream myfile ("sabbir.txt");

    while(getline(myfile,s)){
        stringstream words(s);

        string First_Name,Middle_Name,Last_Name;

        words>>First_Name;
        words>>Middle_Name;
        words>>Last_Name;
  //printing in the standard Bangladeshi passport format
        cout<<Last_Name<<" "<<First_Name<<" "<<Middle_Name<<endl;
    }
    // close file
    myfile.close();
}
