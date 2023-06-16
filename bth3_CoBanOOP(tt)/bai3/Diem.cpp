#include "Diem.h"
#include <iostream>
using namespace std;

Diem::Diem() {
    x = y = 0;
}

Diem::Diem(float a, float b) {
    x = a;
    y = b;
}

float Diem::get_x() const {
    return x;
}

float Diem::get_y() const {
    return y;
}

void Diem::Nhap() {
    cout << "Nhap toa do x: ";
    cin >> x;
    cout << "Nhap toa do y: ";
    cin >> y;
}

void Diem::Xuat() const {
    cout << "(" << x << "," << y << ")";
}