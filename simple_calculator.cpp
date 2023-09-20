// C++ program to create calculator using
// switch statement
#include <iostream>
using namespace std;

// Driver code
int main()
{
    char op;
    float num1, num2;

    // It allows user to enter operator
    // i.e. +, -, *, /
    cout << "enter the operation u want to perform: ";
    cin >> op;

    // It allow user to enter the operands
    cout << "enter the 1 number :";
    cin >> num1;
    cout << "enter the 2 number :";
    cin >> num2;

    // Switch statement begins
    switch (op)
    {
    // If user enter +
    case '+':
        cout << "Addition of two numbers is:  ";
        cout << num1 + num2;
        break;

    // If user enter -
    case '-':
        cout << "Subtraction of two numbers is:  ";
        cout << num1 - num2;
        break;

    // If user enter *
    case '*':
        cout << "Multiplication of two numbers is:  ";
        cout << num1 * num2;
        break;

    // If user enter /
    case '/':
        cout << "Divivion of two numbers is:  ";
        cout << num1 / num2;
        break;

    // If the operator is other than +, -, * or /,
    // error message will display
    default:
        cout << "Error! operator is not correct";
    }
    // switch statement ends

    return 0;
}