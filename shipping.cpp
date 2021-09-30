#include <iostream>
#include <string>
using namespace std;

int main()
{
    int length{};
    int width{};
    int height{};
    float fee{2.50};

    cout << "Hello to shipping cost calculator!" << endl
         << endl;

    cout << "All dimensions must be 10 or less inches" << endl
         << endl;

    cout << "Please enter the length of the package you want to ship in inches: ";
    cin >> length;

    cout << "Please enter the width of the package you want to ship in inches: ";
    cin >> width;

    cout << "Please enter the height of the package you want to ship in inches: ";
    cin >> height;

    int volume = length * width * height;

    if (length > 0 && width > 0 && height > 0)
    {
        if (length <= 10 && width <= 10 && height <= 10)
        {
            cout << "\nBase shipping cost: 2.50$" << endl;

            if (volume > 0 && volume < 100)
            {
                cout << "Your package didn't exceed 100 cubic inches, there will not be any surcharge" << endl
                     << endl;
                cout << "Total cost: " << fee << "$" << endl;
                cout << "Thanks for choosing us!\n";
            }

            else if (volume >= 100 && volume <= 499)
            {
                cout << "Your pachage exceeded 100 cubic inch, there will be 10% surcharge" << endl
                     << endl;

                cout << "Total cost: " << fee * 1.1 << "$" << endl;
                cout << "Thanks for choosing us!\n";
            }

            else if (volume >= 500)
            {
                cout << "Your package exceeded 500 cubic inch, there will be 20% surcharge" << endl
                     << endl;
                cout << "Total cost: " << fee * 1.2 << "$" << endl;
                cout << "Thanks for choosing us!\n";
            }
        }

        else
            cout << "\nSorry, we can't ship because one or more of the dimensions exceeded 10 inches!\n";
    }
    else
        cout << "\nOne or more of the dimensions is/are invalid!\n";
    return 0;
}
