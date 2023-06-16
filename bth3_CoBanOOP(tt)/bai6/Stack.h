#ifndef STACK_H
#define STACK_H

class Stack {
public:
    Stack(); // Hàm khởi tạo không tham số
    Stack(int capacity); // Hàm khởi tạo có tham số
    ~Stack(); // Hàm huỷ bỏ

    bool isEmpty(); // Kiểm tra Stack có trống không
    bool isFull(); // Kiểm tra Stack đã đầy hay chưa
    void push(int x); // Đưa một phần tử vào Stack
    int pop(); // Lấy ra phần tử đầu tiên trong Stack
    int peek(); // Truy xuất phần tử đầu tiên trong Stack

private:
    int* arr;
    int capacity;
    int top;
};

#endif
