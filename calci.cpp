#include <iostream>
using namespace std;

void calculator() {
    cout << "Calculator" << endl;

    double num1, num2;
    char operation;

    // Input two numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Display operation choices
    cout << "\nChoose an operation:" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;

    // Get user choice
    cout << "Enter the operation (+, -, *, /): ";
    cin >> operation;

    // Perform the operation based on user choice
    switch (operation) {
        case '+':
            cout << "\nThe result of addition: " << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
            break;
        case '-':
            cout << "\nThe result of subtraction: " << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
            break;
        case '*':
            cout << "\nThe result of multiplication: " << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "\nThe result of division: " << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
            } else {
                cout << "\nError: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "\nInvalid choice. Please choose a valid operation." << endl;
            break;
    }
}

int main() {
    calculator();
    return 0;
}
