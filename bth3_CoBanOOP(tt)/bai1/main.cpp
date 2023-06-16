#include "Diem.h"
#include <iostream>
using namespace std;
int main()
{
	Diem a, b;
	int n, m;
	cout << "Nhap toa do diem a!";
	cout << endl;
	a.Nhap();
	cout << endl;
	cout << " Toa do diem a(x,y)";
	a.Xuat();
	cout << endl;
	cout << "Cap nhat hoanh do! " << endl;
	cout << " Nhap hoanh do can thay doi : ";
	cin >> n;
	a.set_x(n);
	cout << " Nhap tung do can thay doi: ";
	cin >> m;
	a.set_y(m);
	cout << " Toa do moi la: " << "(" << a.get_x() << "," << a.get_y() << ")" << endl;
	cout << endl;
	cout << "Nhap toa do can tinh tien! " << endl;
	b.Nhap();
	cout << " Diem a sao khi cap nhat va tinh tien";
	a.TinhTien(b.get_x(), b.get_y());
	a.Xuat();
	system("pause");
	return 0;
}