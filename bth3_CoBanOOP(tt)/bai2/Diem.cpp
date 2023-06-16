#include "Diem.h"
#include <iostream>
using namespace std;

Diem::Diem()
{
    x = 0;
    y = 0;
}

Diem::Diem(int x, int y)
{
    this->x = x;
    this->y = y;
}

void Diem::setX(int x)
{
    this->x = x;
}

void Diem::setY(int y)
{
    this->y = y;
}

int Diem::getX()
{
    return x;
}

int Diem::getY()
{
    return y;
}

void Diem::tinhTien(int dx, int dy)
{
    x += dx;
    y += dy;
}

void Diem::nhap()
{
    cout << "Nhap hoanh do: ";
    cin >> x;
    cout << "Nhap tung do: ";
    cin >> y;
}

void Diem::xuat()
{
    cout << "(" << x << "," << y << ")";
}