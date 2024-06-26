// Write a program that defines a function that takes two integers as arguments
// and returns their sum. then, call that function and output the result.
#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int x, y, add;
    cout << "enter the first & second number : "<<endl;
    cin >> x >> y;
    add = sum(x, y);
    cout << "the sum of two numbers is " << add;

    return 0;
}