#include <string>
#include <iostream>
using namespace std;

int main()
{
    int room_charge = 30;
    int sales_tax;
    int small_room_count = 0;
    int large_room_count = 0;
    float tax = 0.06;

    cout << "Hello, welcome to Mohammad's carpet cleaning center " << endl
         << endl;

    cout << "Please enter how many small rooms you would like to clean: ";
    cin >> small_room_count;

    cout << "Please enter how many large rooms you would like to clean: ";
    cin >> large_room_count;

    cout << "\nEstimate for carpet cleaning services: " << endl
         << endl;

    cout << "Number of small rooms: " << small_room_count << endl;
    cout << "Number of large rooms: " << large_room_count << endl
         << endl;

    cout << "Price per small room: $25" << endl;
    cout << "Price per large room: $35" << endl
         << endl;

    cout << "Cost: $" << (small_room_count * 25) + (large_room_count * 35) << endl;
    cout << "Tax: $" << (small_room_count * 25 * tax) + (large_room_count * 35 * tax) << endl
         << endl;

    cout << "=======================================================" << endl
         << endl;

         cout <<"The total estimate is: "<< ((small_room_count * 25) + (large_room_count * 35)) + ((small_room_count * 25 * tax) + (large_room_count * 35 * tax)) <<"$"<<endl<<endl;


    return 0;
}