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
    int x, y;
    char ch;
    cout << "Enter first number and second number: "<<endl;
    cin >> x >> y;
    cout << "Enter  character(operator): ";
    cin >> ch;

    int result = calculate(x,y,ch);
    cout << "Result is : " << result << endl;
    return 0;
}