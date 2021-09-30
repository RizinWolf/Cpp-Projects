#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Welcome to Euro to USD converter" << endl;
    const double usd_per_euro{1.18};
    double euros;
    cout << "Enter the value in Euros: ";
    cin >> euros;
    cout << "This amount of Euros is " << usd_per_euro * euros << "$" << endl;
    return 0;
}
