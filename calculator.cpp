#include <iostream>
using namespace std;
int main()
{
    double num1, num2; // variable for number 1 and number 2
    char operation;    // variable for operation
    double result;     // variable for result

    cout << "This is a Simple Calulator " << endl;

    cout << "Enter number 1: "; // to input  number 1
    cin >> num1;
    cout << "Enter number 2: "; // to input number 2
    cin >> num2;
    cout << "Enter operation '+,-,*,/': "; // to input the operation to be performed
    cin >> operation;

    switch (operation)
    {
    case '+': // when the operation is addition
        result = num1 + num2;
        cout << "result of " << num1 << " + " << num2 << " = " << result << endl;
        break;
    case '-': // when the operation is substraction
        result = num1 - num2;
        cout << "result of " << num1 << " - " << num2 << " = " << result << endl;
        break;
    case '*': // when the operation is multiplication
        result = num1 * num2;
        if (num1, num2 == 0)
        {
            cout << "the product = 0 " << endl;
        }
        else if (num1 == 1)
        {
            cout << "the product = " << num2 << endl;
        }
        else if (num2 == 1)
        {
            cout << "the product = " << num1 << endl;
        }
        else
        {
            cout << "result of " << num1 << " * " << num2 << " = " << result << endl;
            break;
        }
    case '/': // when the operation is division
        if (num2 == 0)
        {
            cout << "division with 0 not possible " << endl;
        }
        else
        {
            result = num1 / num2;
            cout << "result of " << num1 << " / " << num2 << " = " << result << endl;
            break;
        }
    default: // when the operation is invalid
        cout << "Invalid operation. Please enter +,  -, *, or /." << endl;
        break;
    }
    return 0;
}