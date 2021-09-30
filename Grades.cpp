#include <iostream>
#include <string>
using namespace std;

int main()
{
    int score{};
    cout << "Enter your score in the class: ";
    cin >> score;

    if (score >= 0 && score <= 100)
    {
        if (score >= 90 && score <= 100)
        {
            cout << "You got (A+)\n";
        }

        else if (score >= 85 && score <= 89)
        {
            cout << "You got (A)\n";
        }

        else if (score >= 80 && score <= 84)
        {
            cout << "You got (A-)\n";
        }

        else if (score >= 77 && score <= 79)
        {
            cout << "You got (B+)\n";
        }

        else if (score >= 73 && score <= 76)
        {
            cout << "You got (B)\n";
        }

        else if (score >= 70 && score <= 72)
        {
            cout << "You got (B-)\n";
        }

        else if (score >= 65 && score <= 69)
        {
            cout << "You got (C+)\n";
        }

        else if (score >= 60 && score <= 64)
        {
            cout << "You got (C)\n";
        }

        else if (score >= 55 && score <= 59)
        {
            cout << "you got (C-)\n";
        }

        else if (score >= 50 && score <= 54)
        {
            cout << "You got (D)\n";
        }

        else
            cout << "you got (F), Please retake the class!\n";
    }
    else
        cout << "This score is invalid!\n";

    return 0;
}
