/*
NAME: MD. SABBIR AHMED
ID:20200105021
SECTION:A
----------------------
CHAPTER:10
PROBLEM:01
*/

//including  headers
#include <iostream>
#include<fstream>
#include<vector>
using namespace std;
// main function
int main()
{
   // open file
   fstream fin,f1;
   fin.open("sabbir.txt");
   // first making a variable for reading line by line
   string line;
   // variable for storing count of lines and words
   int countLine=0,countWord=0;
   // first read line by line
   while (fin)
   {

       getline(fin, line);
       countLine++;
   }
   countLine--;
   // print number of lines
   cout<<"The number of lines : "<<countLine<<endl;

   // make two string variable
   string word,name;
   // open file
   name = "sabbir.txt";
   f1.open(name.c_str());
   // make a array
   vector<string> arr;
   // read word by word
   while (f1 >> word)
   {
       // inc countword
       countWord++;
       // push word to array
       arr.push_back(word);
   }
   // print number of words
   cout<<"The number of words : "<<countWord<<endl;
   // close both the files
   fin.close();
   f1.close();
   // make a arrray for noting frequency
   // intializing it to array of zeroes
   int arr1[26];
   for(int i=0;i<26;i++)
   {
       arr1[i]=0;
   }
   // storing the frequency one by one using loops
   for(int i=0;i<arr.size();i++)
   {
       for(int j=0;j<arr[i].size();j++)
       {
           arr1[toupper(arr[i][j])-65]++;
       }
   }
   // printing the frequency using loops
   cout<<"Frequency : "<<endl;
   for(int i=0;i<26;i++)
   {
       cout<<char(i+65)<<" - "<<arr1[i];
       if(i!=25)
       {
           cout<<" , ";
       }
   }

   return 0;
}
