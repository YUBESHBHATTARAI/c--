/* Write a program that defines a function that takes an integer as an
argument and returns a pointer to that integer.*/
#include <iostream>
using namespace std;

int *returnPointer(int value)
{
    int *ptr = new int;
    *ptr = value;
    return ptr;
}

int main()
{
    int number = 42;
    int *numberPtr = returnPointer(number);
    cout << "Value: " << *numberPtr << endl;
    delete numberPtr;
    return 0;
}
