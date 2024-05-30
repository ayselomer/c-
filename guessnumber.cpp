#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    int randomNumber = (std::rand() % 10) + 1;
    int guess;
    int attempts = 5;

    while (attempts > 0)
    {
        attempts--;
        cout << "Guess a number between 1 and 10: ";
        cin >> guess;

        if (guess > randomNumber)
        {
            cout << "the number is lower" << endl;
        }

        else if (guess < randomNumber)
        {
            cout << "the number is higher" << endl;
        }

        else            
        {
            cout << "you win";
            return 0;
        }
        cout << "You have " << attempts << " attempt(s) left." << endl;
    }

    cout << "You've used all your attempts. You lose. The correct number was " << randomNumber << "." << endl;

    return 0;
}