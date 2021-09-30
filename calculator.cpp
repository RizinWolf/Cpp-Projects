#include <iostream>
#include <string>
using namespace std;

int main()
{
    double fnum, snum;
    char operation;

    double sum;

    cout << "enter first number: ";
    cin >> fnum;

    cout << "enter operation symbol: ";
    cin >> operation;

    cout << "enter second number: ";
    cin >> snum;

    if (operation == '+')
    {
        sum = fnum + snum;
    }

    else if (operation == '-')
    {
        sum = fnum - snum;
    }

    else if (operation == '*')
    {
        sum = fnum * snum;
    }

    else if (operation == '/')
    {
        sum = fnum / snum;
    }

    else
    {
        cout << "the operation called is invalid" << endl;
    }

    if (sum == 69)
    {
        cout << "nice !!" << endl;
    }

    else if (operation == '/' && snum == 0)
    {
        cout << "undefined" << endl;
    }

    else
    {
        cout << sum << endl;
    }
    return 0;
}
