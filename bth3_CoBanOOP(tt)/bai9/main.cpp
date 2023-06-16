#include "Dathuc.h"

int main()
{
    // Nhập và xuất đa thức b
    Dathuc b;
    b.Nhap();
    b.Xuat();

    // Nhập đa thức c
    cout << "Nhap da thuc can cong:" << endl;
    Dathuc c;
    c.Nhap();

    // Cộng 2 đa thức b và c
    Dathuc Tong = b.Cong(c);
    cout << "Tong hai da thuc la: ";
    Tong.Xuat();

    // Trừ 2 đa thức b và c
    Dathuc Hieu = b.Tru(c);
    cout << "Hieu hai da thuc la: ";
    Hieu.Xuat();

    // Nhân 2 đa thức b và c
    Dathuc Tich = b.Nhan(c);
    cout << "Tich hai da thuc la: ";
    Tich.Xuat();

    // Chia đa thức b cho c
    Dathuc Thuong = b.Chia(c);
    cout << "Thuong hai da thuc la: ";
    Thuong.Xuat();

    // Tính đạo hàm của đa thức b
    Dathuc DaoHam = b.DaoHam();
    cout << "Dao ham cua b: ";
    DaoHam.Xuat();

    // Tính nguyên hàm của đa thức b
    Dathuc NguyenHam = b.NguyenHam();
    cout << "Nguyen ham cua b: ";
    NguyenHam.Xuat();

    system("pause");
    return 0;
}