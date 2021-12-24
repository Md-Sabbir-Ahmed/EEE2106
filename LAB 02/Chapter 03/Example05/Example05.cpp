#include<iostream>
#include<cstdlib>

using namespace std;
int main()
{
    int magic , guess ;
    magic = rand();
    cout << "Enter your guess: ";
    cin >> guess;
    if( guess == magic)
    {
        cout<<"Right Guess!"<<endl;
    }
    else{
        cout<<"Sorry! You guessed wrong"<<endl;
    }

    return 0 ;
}
