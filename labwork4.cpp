// Write a program that uses an array to store 5 integers, and then outputs the
// sum of those integers.
#include <iostream>
using namespace std;
int main()
{
    int i = 0, sum = 0, arr[5] = {3, 4, 5, 6, 7};
    for (i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    cout << "the sum are " << sum;
    return 0;
}