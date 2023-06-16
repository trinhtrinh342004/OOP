#include "Stack.h"
#include <iostream>

using namespace std;

Stack::Stack() {
    top = nullptr;
}

Stack::~Stack() {
    while (!IsEmpty()) {
        Pop();
    }
}

void Stack::Push(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = top;
    top = newNode;
}

int Stack::Pop() {
    if (IsEmpty()) {
        return -1;
    }
    int value = top->data;
    Node* temp = top;
    top = top->next;
    delete temp;
    return value;
}

int Stack::Top() const {
    if (IsEmpty()) {
        return -1;
    }
    return top->data;
}

bool Stack::IsEmpty() const {
    return top == nullptr;
}

void Stack::Input() {
    int n;
    cout << "Nhap so phan tu muon them vao stack: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int value;
        cout << "Nhap phan tu " << i + 1 << ": ";
        cin >> value;
        Push(value);
    }
}