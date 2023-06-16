#include "TamGiac.h"
#include <iostream>
using namespace std;

int main()
{
    // Tạo đối tượng tam giác
    TamGiac TG;

    // Nhập tọa độ tam giác
    cout << "Nhap toa do cua tam giac:\n";
    TG.nhap();

    // Xuất tọa độ tam giác
    cout << "Toa do cua tam giac:\n";
    TG.xuat();

    // Dịch chuyển tam giác
    TG.tinhTien(3, 4);
    cout << "Toa do tam giac sau khi dich chuyen:\n";
    TG.xuat();

    // Quay tam giác
    Diem Goc(0, 0);
    float rad = 3.14 / 2;
    TG.quay(Goc, rad);
    cout << "Toa do tam giac sau khi quay:\n";
    TG.xuat();

    // Phóng to tam giác
    float k = 2;
    TG.phongTo(k);
    cout << "Toa do tam giac sau khi phong to:\n";
    TG.xuat();

    // Thu nhỏ tam giác
    TG.thuNho(k);
    cout << "Toa do tam giac sau khi thu nho:\n";
    TG.xuat();

    return 0;
}