/*  Write a program that defines an inline function that takes three integers
as arguments and returns the maximum of those integers. Call this function in
the main () function and print the result. */
#include <iostream>
using namespace std;

inline int great(int a, int b, int c) {
    if ((a > b) && (a > c)) {
        return a;
    } else if ((b > a) && (b > c)) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int x, y, z;
    cout << "Enter three integers: ";
    cin >> x >> y >> z;
    int maximum = great(x, y, z);
    cout << "The maximum of the three integers is " << maximum << endl;
    return 0;
}
