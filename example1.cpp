/* write c++ program to print positive /negative   odd/even number or else*/

#include <iostream>

using namespace std;

int main()
{

    int number;

    cout << "Enter any integer number: ";

    cin >> number;
    if (number > 0)
    {

        if (number % 2 == 0)
        {

            cout << "Positive even number." << endl;
        }
        else
        {

            cout << "Positive odd number." << endl;
        }
    }
    else if (number < 0)
    {

        if (number % 2 == 0)
        {

            cout << "Negative even number." << endl;
        }
        else
        {

            cout << "Negative odd number." << endl;
        }
    }
    else
    {

        cout << "The number is zero." << endl;
    }

    return 0;
}