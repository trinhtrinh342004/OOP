#include <iostream>
#include "Stack.h"

using namespace std;

void primeFactor(int n) {
    Stack s;

    cout << n << " = ";

    int i = 2;
    while (n > 1) {
        if (n % i == 0) {
            s.push(i);
            n /= i;
        }
        else {
            i++;
        }
    }

    while (!s.isEmpty()) {
        cout << s.pop();
        if (!s.isEmpty()) {
            cout << " * ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Nhap vao mot so: ";
    cin >> n;
    primeFactor(n);
    return 0;
}