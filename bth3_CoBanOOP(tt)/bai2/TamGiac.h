#pragma once
#include "Diem.h"

class TamGiac
{
private:
    Diem A;
    Diem B;
    Diem C;
public:
    TamGiac();
    TamGiac(Diem A, Diem B, Diem C);
    void nhap();
    void xuat();
    void tinhTien(int dx, int dy);
    void quay(Diem Goc, float rad);
    void phongTo(float k);
    void thuNho(float k);
};