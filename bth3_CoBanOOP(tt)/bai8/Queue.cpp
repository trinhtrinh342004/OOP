#include "Queue.h"

Queue::Queue() {
    front = nullptr;
    rear = nullptr;
    size = 0;
}

Queue::~Queue() {
    Clear();
}

void Queue::Enqueue(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    if (IsEmpty()) {
        front = newNode;
    }
    else {
        rear->next = newNode;
    }
    rear = newNode;
    size++;
}

int Queue::Dequeue() {
    if (IsEmpty()) {
        return -1;
    }

    int value = front->data;
    Node* temp = front;

    if (front == rear) {
        front = nullptr;
        rear = nullptr;
    }
    else {
        front = front->next;
    }

    delete temp;
    size--;
    return value;
}

int Queue::Front() const {
    if (IsEmpty()) {
        return -1;
    }
    return front->data;
}

bool Queue::IsEmpty() const {
    return front == nullptr;
}

int Queue::Size() const {
    return size;
}

void Queue::Input() {
    int n;
    std::cout << "Nhap so phan tu muon them vao queue: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int value;
        std::cout << "Nhap phan tu " << i + 1 << ": ";
        std::cin >> value;
        Enqueue(value);
    }
}

void Queue::Clear() {
    while (!IsEmpty()) {
        Dequeue();
    }
}

void Queue::Print() const {
    Node* current = front;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}