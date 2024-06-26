/* Write a program that defines a function that takes two arguments: an integer
and a string. The function should have a default argument for the string, so
that if it is not provided when the function is called, the default value "Default
String" will be used. */
#include <iostream>
using namespace std;
 
void myFunction(int num, string str = "Default String") {
    // Function implementation goes here
}

int main() {
    // Call the function with two arguments
    myFunction(10, "Hello");

    // Call the function with only one argument
    myFunction(20);

    return 0;
}