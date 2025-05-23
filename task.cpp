#include <iostream>

using namespace std;

// Overloaded addition functions
int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

double add(int a, double b) {
    return a + b;
}

double add(double a, int b) {
    return a + b;
}

// Overloaded subtraction functions
int subtract(int a, int b) {
    return a - b;
}

double subtract(double a, double b) {
    return a - b;
}

double subtract(int a, double b) {
    return a - b;
}

double subtract(double a, int b) {
    return a - b;
}

void performOperation(int option) {
    if (option == -1) {
        cout << "Exiting program." << endl;
        return;
    }

    double num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Handling different types based on user choice
    switch (option) {
        case 1:  // Addition for integers
            cout << "Result: " << add((int)num1, (int)num2) << endl;
            break;
        case 2:  // Addition for doubles
            cout << "Result: " << add(num1, num2) << endl;
            break;
        case 3:  // Subtraction for integers
            cout << "Result: " << subtract((int)num1, (int)num2) << endl;
            break;
        case 4:  // Subtraction for doubles
            cout << "Result: " << subtract(num1, num2) << endl;
            break;
        case 5:  // Addition of integer and double
            cout << "Result: " << add((int)num1, num2) << endl;
            break;
        case 6:  // Subtraction of integer and double
            cout << "Result: " << subtract((int)num1, num2) << endl;
            break;
        case 7:  // Addition of double and integer
            cout << "Result: " << add(num1, (int)num2) << endl;
            break;
        case 8:  // Subtraction of double and integer
            cout << "Result: " << subtract(num1, (int)num2) << endl;
            break;
        default:
            cout << "Invalid option! Please choose a valid option (1-8) or -1 to exit." << endl;
    }
}

int main() {
    int option;

    do {
        // Display the menu
        cout << "Select an option (or -1 to exit):" << endl;
        cout << "1. Addition for integers" << endl;
        cout << "2. Addition for doubles" << endl;
        cout << "3. Subtraction for integers" << endl;
        cout << "4. Subtraction for doubles" << endl;
        cout << "5. Addition of integer and double" << endl;
        cout << "6. Subtraction of integer and double" << endl;
        cout << "7. Addition of double and integer" << endl;
        cout << "8. Subtraction of double and integer" << endl;
        cout << "-1. Exit" << endl;

        // Read user input
        cin >> option;

        // Perform the operation
        performOperation(option);

    } while (option != -1);

    return 0;
}

