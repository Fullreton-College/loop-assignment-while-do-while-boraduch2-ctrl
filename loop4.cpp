#include <iostream>

using namespace std;

int main()
{
    int number = 42;
    int guess;
    int count = 0;

    cout << "Guess the number (1 to 100): ";
    cin >> guess;

    while (guess != number)
    {
        if (guess > number)
            cout << "Too high! Try again: ";
        else
            cout << "Too low! Try again: ";
        
        cin >> guess;
        count++;
    }
    cout << "Congratulations! You guessed the number." << endl;
    cout << "You made " << count << " guesses." << endl;
    
    return 0;
}