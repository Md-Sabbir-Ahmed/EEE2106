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
        cout<<magic<<" is the number"<<endl;
    }
    else{
        cout<<"Sorry! You guessed wrong"<<endl;
        if(guess>magic)
        {
            cout<<"Your guess is too high"<<endl;
        }
        else{
            cout<<"Your guess is too low"<<endl;
        }
    }

    return 0 ;
}
