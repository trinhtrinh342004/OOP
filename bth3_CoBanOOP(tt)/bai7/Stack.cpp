#include "Stack.h"

Stack::Stack() {
    capacity = 100;
    arr = new int[capacity];
    top = -1;
}

Stack::Stack(int capacity) {
    this->capacity = capacity;
    arr = new int[capacity];
    top = -1;
}

Stack::~Stack() {
    delete[] arr;
}

bool Stack::isEmpty() {
    return top == -1;
}

bool Stack::isFull() {
    return top == capacity - 1;
}

void Stack::push(int x) {
    if (isFull()) {
        return;
    }
    arr[++top] = x;
}

int Stack::pop() {
    if (isEmpty()) {
        return -1;
    }
    return arr[top--];
}

int Stack::peek() {
    if (isEmpty()) {
        return -1;
    }
    return arr[top];
}