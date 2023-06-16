#include <iostream>
#include "DongHo.h"

using namespace std;

int main() {
    DongHo dh1; // khởi tạo đồng hồ với giá trị mặc định
    dh1.Xuat(); // in ra giá trị mặc định (0:0:0 AM)
    cout << endl;

    DongHo dh2; // khởi tạo đồng hồ mới
    dh2.Nhap(); // nhập giá trị từ bàn phím
    dh2.Xuat(); // in ra giá trị vừa nhập
    cout << endl;

    DongHo dh3; // khởi tạo đồng hồ mới
    dh3.Nhap(); // nhập giá trị từ bàn phím
    dh3.Xuat(); // in ra giá trị vừa nhập
    cout << endl;

    DongHo dh4 = dh2.Cong(dh3); // tính tổng hai đồng hồ
    dh4.Xuat(); // in ra giá trị tổng
    cout << endl;

    DongHo dh5 = dh2.Tru(dh3); // tính hiệu hai đồng hồ
    dh5.Xuat(); // in ra giá trị hiệu
    cout << endl;

    return 0;
}