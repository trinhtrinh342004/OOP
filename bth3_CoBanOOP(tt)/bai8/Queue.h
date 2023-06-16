#pragma once

#include <iostream>

class Queue {
public:
    Queue();
    ~Queue();

    void Enqueue(int value);
    int Dequeue();
    int Front() const;
    bool IsEmpty() const;
    int Size() const;
    void Input();
    void Clear();
    void Print() const;

private:
    struct Node {
        int data;
        Node* next;
    };

    Node* front;
    Node* rear;
    int size;
};