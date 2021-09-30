#include <iostream>
#include <string>
using namespace std;

int main()
{
    bool wear_jacket {false};
    double temperature {0};
    double wind_speed{0};

    cout << boolalpha;

    cout << "Please enter the temperature in your area: ";
    cin >> temperature;

    cout <<"\nPlease enter the wind speed in your area: ";
    cin >> wind_speed;

    wear_jacket = (temperature <= 15 && wind_speed >= 30);

    cout << "\nWear a jacket: " << wear_jacket;
    return 0;
}

