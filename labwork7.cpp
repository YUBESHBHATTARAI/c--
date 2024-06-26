/*  Write a program that demonstrates function overloading by defining two
functions with the same name but different parameter lists. One function
should take two integers as arguments and return their sum, and the other
function should take three integers as arguments and return their sum. Call
both functions in the main () function and print the results.  */
#include <iostream>
using namespace std;
int sum(int a, int b, int c)
{
    return a + b + c;
}
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int x, y, z;
    cout << "enter the  numbers : " << endl;
    cin >> x >> y >> z;
    int result1 = sum(x, y);
    cout << "the sum of the two numbers is : " << result1 << endl;
    int result2 = sum(x, y, z);
    cout << "the sum of  three numbers are  " << result2;

    return 0;
}