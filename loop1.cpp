#include <iostream>

using namespace std;

int main()
{
    double membershipfee = 3000.0;
    double increaserate = 0.03;
    for (int year =1; year <= 5; year++)
    {
        membershipfee = membershipfee + (membershipfee * increaserate);

        cout << "Year" << year
             << " projected membership fee: $"
             << membershipfee << endl;
    }

    return 0;
}

