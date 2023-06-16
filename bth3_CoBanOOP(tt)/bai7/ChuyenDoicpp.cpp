#include <iostream>
#include "Stack.h"

using namespace std;

void decimalToHex(int n) {
    Stack s;

    while (n > 0) {
        int remainder = n % 16;
        if (remainder < 10) {
            s.push(remainder);
        }
        else {
            s.push('A' + remainder - 10);
        }
        n /= 16;
    }

    cout << "Hexadecimal: ";
    while (!s.isEmpty()) {
        int digit = s.pop();
        if (digit < 10) {
            cout << digit;
        }
        else {
            cout << (char)digit;
        }
    }
    cout << endl;
}

void decimalToOctal(int n) {
    Stack s;

    while (n > 0) {
        int remainder = n % 8;
        s.push(remainder);
        n /= 8;
    }

    cout << "Octal: ";
    while (!s.isEmpty()) {
        cout << s.pop();
    }
    cout << endl;
}

void decimalToBinary(int n) {
    Stack s;

    while (n > 0) {
        int remainder = n % 2;
        s.push(remainder);
        n /= 2;
    }

    cout << "Binary: ";
    while (!s.isEmpty()) {
        cout << s.pop();
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    decimalToHex(n);
    decimalToOctal(n);
    decimalToBinary(n);

    return 0;
}