/*  Write a program that define a function that takes two integers and a character
as arguments and returns the result of the operation specified by the character.
The possible characters are '+', '-', '*', '/'.  */
#include <iostream>
using namespace std;
int calculate(int num1, int num2, char op)
{
    int result;
    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;

    default:
        cout << "Invalid operator!";
        break;
    }
    return result;
}
int main()
{
    int num1, num2;
    char op;
    cout << "Enter first number and second number: ";
    cin >> num1 >> num2;
    cout << "Enter operator: ";
    cin >> op;

    int result = calculate(num1, num2, op);
    cout << "Result is : " << result << endl;
    return 0;
}