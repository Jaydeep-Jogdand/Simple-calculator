#include <iostream>
#include <string> 
using namespace std;

bool checkIfNumber(string str) {
    for (char c : str) {
        if (!isdigit(c)) {  
            return false;
        }
    }
    return true;
}
int getInput() {
    string userInput;
    int number;
    while (true) {
        cout << "Enter a two-digit number: ";
        cin >> userInput;

        if (checkIfNumber(userInput)) {
            number = stoi(userInput);  
            if (number >= 10 && number <= 99) {
                return number;
            } else {
                cout << "Invalid input! Please enter a two-digit number." << endl;
            }
        } else {
            cout << "Invalid input! Please enter a valid number." << endl;
        }
    }
}
int addNumbers(int number1, int number2) {
    return number1 + number2;
}
int subtractNumbers(int number1, int number2) {
    return number1 - number2;
}
int multiplyNumbers(int number1, int number2) {
    return number1 * number2;
}
int divideNumbers(int number1, int number2) {
    if (number2 == 0) {
        cout << "Error! Division by zero." << endl;
    }
    return number1 / number2;
}

int main() {
    int firstNumber, secondNumber, operationChoice;

   
    firstNumber = getInput();
    secondNumber = getInput();

    
    cout << "\nChoose an operation: " << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter the number corresponding to the operation: ";
    cin >> operationChoice;

    switch (operationChoice) {
        case 1:
            cout << "Addition Of Two Digit No is  : " << addNumbers(firstNumber, secondNumber) << endl;
            break;
        case 2:
            cout << "Substraction Of Two Digit No is: " << subtractNumbers(firstNumber, secondNumber) << endl;
            break;
        case 3:
            cout << "Multiplication Of Two Digit No is: " << multiplyNumbers(firstNumber, secondNumber) << endl;
            break;
        case 4:
            cout << "Division Of Two Digit No is: " << divideNumbers(firstNumber, secondNumber) << endl;
            break;
        default:
            cout << "Invalid operation choice!" << endl;
    }
    return 0;
}
