#include <iostream>
#include "Stack.h"

using namespace std;

int main() {
    Stack s;

    s.Input();

    while (!s.IsEmpty()) {
        cout << s.Pop() << " ";
    }
    cout << endl;

    cout << s.Pop() << endl; 
    cout << s.Top() << endl;
    cout << s.Pop() << endl;
    cout << s.IsEmpty() << endl; 
    cout << s.Pop() << endl; 
    cout << s.IsEmpty() << endl; 

    return 0;
}