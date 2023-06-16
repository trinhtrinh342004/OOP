#pragma once
class Diem
{
private:
    int x;
    int y;
public:
    Diem();
    Diem(int x, int y);
    void setX(int x);
    void setY(int y);
    int getX();
    int getY();
    void tinhTien(int dx, int dy);
    void nhap();
    void xuat();
};
