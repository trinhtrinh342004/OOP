#include "DaGiac.h"
#include <iostream>
using namespace std;

int main() {
    DaGiac dg;
    dg.Nhap();
    cout << "Da giac vua nhap la:\n";
    dg.Xuat();
    cout << "Sau khi tinh tien:\n";
    dg.TinhTien(2, 3);
    dg.Xuat();
    cout << "Sau khi quay:\n";
    dg.Quay(Diem(0, 0), 3.14 / 2);
    dg.Xuat();
    cout << "Sau khi phong to:\n";
    dg.PhongTo(2);
    dg.Xuat();
    cout << "Sau khi thu nho:\n";
    dg.ThuNho(2);
    dg.Xuat();
    return 0;
}