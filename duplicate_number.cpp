#include <iostream>
#include <string>
using namespace std;


int main()
{
    int nums [6] = {1,2,3,4,4,5};

    for (int i =0 ; i < 6 ; i++)
    {
        for (int j=i+1 ; j < 6 ; j++)
        {
            if (nums[i]== nums[j])
            {
                cout << nums[i] << endl;
            }

        }
    }
    return 0;
}
