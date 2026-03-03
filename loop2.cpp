#include <iostream>

using namespace std;

int main()
{
    int number;
    int largest;
    int smallest;

    cout << "Enter integers (-99 to stop): ";
    cin >> number;

    if (number != -99)
    {
        largest = number;
        smallest = number;

        while (number != -99)
        {
            if (number > largest)
                largest = number;

            if (number < smallest)
                smallest = number;

            cin >> number;
        }

        cout << "Largest number: " << largest << endl;
        cout << "Smallest number: " << smallest << endl;
    }
    else
    {
        cout << "No numbers were entered." << endl;
    }
    
    return 0;
}