#pragma once

#include <iostream>

class Stack {
public:
    Stack();
    ~Stack();

    void Push(int value);
    int Pop();
    int Top() const;
    bool IsEmpty() const;
    void Input();

private:
    struct Node {
        int data;
        Node* next;
    };

    Node* top;
};