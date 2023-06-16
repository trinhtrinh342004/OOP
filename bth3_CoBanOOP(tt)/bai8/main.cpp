#include <iostream>
#include "Queue.h"

int main() {
    Queue q;

    q.Input();

    std::cout << "Kich thuoc hien tai cua queue la: " << q.Size() << std::endl;

    std::cout << "Cac phan tu trong queue la: ";
    q.Print();

    q.Clear();
    std::cout << "Sau khi xoa cac phan tu, kich thuoc cua queue la: " << q.Size() << std::endl;

    return 0;
}