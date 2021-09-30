#include <iostream>
#include <string>
using namespace std;

int main()
{
    int cents{};

    cout << "Please enter an amount of cents: ";
    cin >> cents;

    int dollars = cents / 100;
    cents = cents % 100;

    int quarters = cents / 25;
    cents = cents % 25;

    int dimes = cents / 10;
    cents = cents % 10;

    int nickels = cents / 5;
    cents = cents % 5;

    cout << "This amount of cents is: \nDollars: " << dollars << "\nQuarters: " << quarters << "\nDimes: " << dimes << "\nNickels: " << nickels << "\nPennies: " << cents << endl;
    return 0;
}
