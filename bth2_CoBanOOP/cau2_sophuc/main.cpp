#include "SoPhuc.h"

void main()
{
	SoPhuc a, b;
	a.Nhap();
	b.Nhap();
	
	SoPhuc tong = a.Tong(b);
	SoPhuc hieu = a.Hieu(b);
	SoPhuc tich = a.Tich(b);
	SoPhuc thuong = a.Thuong(b);

	cout << "Tong hai so phuc la: ";
	tong.Xuat();
	cout << endl;

	cout << "Hieu hai so phuc la: ";
	hieu.Xuat();
	cout << endl;

	cout << "Tich hai so phuc la: ";
	tich.Xuat();
	cout << endl;

	cout << "Thuong hai so phuc la: ";
	thuong.Xuat();
	cout << endl;

	float A = a.Module();
	cout << "Vay module cua so phuc: " << A << endl;
	cout << endl;
}