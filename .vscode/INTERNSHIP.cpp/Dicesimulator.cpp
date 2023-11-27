// DICE SIMULATOR->>

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int rollDie()
{
    return rand() % 6 + 1;
}

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    cout << "Welcome To The Dice Simulator " << endl;

    char rollAgain;
    do
    {
        int die1 = rollDie();
        int die2 = rollDie();

        cout << "You rolled: " << die1 << " and " << die2 << endl;
        cout << "Total " << die1 + die2 << endl;

        cout << "Roll again?(y/n): ";
        cin >> rollAgain;
        cout << endl;
    } while (rollAgain == 'y' || rollAgain == 'Y');

    cout << "Thanks for using the Dice Simulator! Goodbye " << endl;

    return 0;
}