//Hexadecimal to decimal number
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    string hex;
    cout << "Enter the Hexadecimal number: ";
    cin >> hex;

    long long decimalNumber = 0;
    int len = hex.length();
    bool isValid = true;

    // Traverse from right to left: i = 0 represents the 16^0 position
    for (int i = 0; i < len; i++) {
        char ch = hex[len - 1 - i]; // Start from the last character
        int digitValue;

        if (ch >= '0' && ch <= '9') {
            digitValue = ch - '0';
        } else if (ch >= 'A' && ch <= 'F') {
            digitValue = ch - 'A' + 10;
        } else if (ch >= 'a' && ch <= 'f') {
            digitValue = ch - 'a' + 10;
        } else {
            isValid = false;
            break;
        }
        
        decimalNumber += digitValue * pow(16, i);
    }

    if (isValid) {
        cout << "The decimal number for " << hex << " is " << decimalNumber << endl;
    } else {
        cout << "Please enter a valid Hexadecimal string" << endl;
    }

    return 0;
}
