#include "PhanSo.h"
void main()
{
	PhanSo a, b;
	a.Nhap();
	b.Nhap();
	PhanSo tong = a.Tong(b);
	PhanSo hieu = a.Hieu(b);
	PhanSo tich = a.Tich(b);
	PhanSo thuong = a.Thuong(b);
	a.Xuat();
	b.Xuat();

	cout << "Tong la: ";
	tong.Xuat();
	cout << endl;
	
	cout << " Hieu la ";
	hieu.Xuat();
	cout << endl;

	cout << " Tich la ";
	tich.Xuat();
	cout << endl;

	cout << " Thuong la";
	thuong.Xuat();
	cout << endl;

	cout << " Phan so thu nhat dinh gia tri la " << a.DinhGiaTri() << endl;
	cout << " Phan so thu hai dinh gia tri la " << b.DinhGiaTri() << endl;
}