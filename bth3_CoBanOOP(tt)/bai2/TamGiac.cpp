#include "TamGiac.h"
#include <iostream>
#include <cmath>
using namespace std;

TamGiac::TamGiac()
{
}

TamGiac::TamGiac(Diem A, Diem B, Diem C)
{
    this->A = A;
    this->B = B;
    this->C = C;
}

void TamGiac::nhap()
{
    cout << "Nhap diem A:\n";
    A.nhap();
    cout << "Nhap diem B:\n";
    B.nhap();
    cout << "Nhap diem C:\n";
    C.nhap();
}

void TamGiac::xuat()
{
    cout << "Tam giac co dinh A";
    A.xuat();
    cout << ", dinh B";
    B.xuat();
    cout << " va dinh C";
    C.xuat();
    cout << endl;
}

void TamGiac::tinhTien(int dx, int dy)
{
    A.tinhTien(dx, dy);
    B.tinhTien(dx, dy);
    C.tinhTien(dx, dy);
}

void TamGiac::quay(Diem Goc, float rad)
{
    float sinRad = sin(rad);
    float cosRad = cos(rad);
    int x, y;

    // Quay diem A
    x = A.getX() - Goc.getX();
    y = A.getY() - Goc.getY();
    A.setX(round(x * cosRad - y * sinRad) + Goc.getX());
    A.setY(round(x * sinRad + y * cosRad) + Goc.getY());

    // Quay diem B
    x = B.getX() - Goc.getX();
    y = B.getY() - Goc.getY();
    B.setX(round(x * cosRad - y * sinRad) + Goc.getX());
    B.setY(round(x * sinRad + y * cosRad) + Goc.getY());

    // Quay diem C
    x = C.getX() - Goc.getX();
    y = C.getY() - Goc.getY();
    C.setX(round(x * cosRad - y * sinRad) + Goc.getX());
    C.setY(round(x * sinRad + y * cosRad) + Goc.getY());
}

void TamGiac::phongTo(float k)
{
    A.setX(round(A.getX() * k));
    A.setY(round(A.getY() * k));
    B.setX(round(B.getX() * k));
    B.setY(round(B.getY() * k));
    C.setX(round(C.getX() * k));
    C.setY(round(C.getY() * k));
}

void TamGiac::thuNho(float k)
{
    A.setX(round(A.getX() / k));
    A.setY(round(A.getY() / k));
    B.setX(round(B.getX() / k));
    B.setY(round(B.getY() / k));
    C.setX(round(C.getX() / k));
    C.setY(round(C.getY() / k));
}