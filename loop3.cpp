#include <iostream>

using namespace std;

int main()
{
    int number = 42;
    int guess;

    cout << "Guess the number (1 to 100): ";
    cin >> guess;

    while (guess != number)
    {
        if (guess > number)
            cout << "Too high! Try again: ";
        else
            cout << "Too low! Try again: ";
        
        cin >> guess;
    }
    cout << "Congratulations! You guessed the number." << endl;
    
    return 0;
}