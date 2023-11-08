#include "InputValidator.h"
#include <iostream>
#include <limits>
using namespace std;

int InputValidator::getIntInput(const string& prompt) {
    int userInput;
    cout << prompt;
    while (!(cin >> userInput) || userInput < 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a valid non-negative integer: ";
    }
    return userInput;
}

