//ROCK,PAPER,SCISSORS->>

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(nullptr)));
    int computerChoice = rand() % 3;
    int userChoice;

    cout << "Let's play Rock,Paper,Scissors! " << endl;
    cout << "0: Rock,1:Paper,2:Scissors!" << endl;
    cout << "Enter your choice: ";
    cin >> userChoice;

    if (userChoice < 0 || userChoice > 2)
    {
        cout << "Invalid Choice. Please choose 0,1 or 2." << endl;
        return 1;
    }
    cout << "Computer's choice: " << computerChoice << endl;
    cout << "Your choice: " << endl;

    if (userChoice == computerChoice)
    {
        cout << "It's a tie! " << endl;
    }
    else if ((userChoice == 0 && computerChoice == 2) ||
             (userChoice == 1 && computerChoice == 0) ||
             (userChoice == 2 && computerChoice == 1))
    {
        cout << "You win!" << endl;
    }
    else
    {
        cout << "Computer wins! " << endl;
    }
    return 0;
}
