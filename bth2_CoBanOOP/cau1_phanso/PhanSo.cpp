#include "PhanSo.h"
#include <iostream>
using namespace std;

void PhanSo::Nhap()
{
	cout << "Nhap tu so va mau so: ";
	cin >> iTuSo >> iMauSo;
}

void PhanSo::Xuat()
{
	cout << iTuSo << "/" << iMauSo;
	cout << endl;
}

PhanSo PhanSo::Tong(PhanSo ps)
{
	PhanSo Tong;
	Tong.iTuSo = iTuSo * ps.iMauSo + iMauSo * ps.iTuSo;
	Tong.iMauSo = iMauSo * ps.iMauSo;
	return Tong;
}

PhanSo PhanSo::Hieu(PhanSo ps)
{
	PhanSo Hieu;
	Hieu.iTuSo = iTuSo * ps.iMauSo - iMauSo * ps.iTuSo;
	Hieu.iMauSo = iMauSo * ps.iMauSo;
	return Hieu;
}

PhanSo PhanSo::Tich(PhanSo ps)
{
	PhanSo Tich;
	Tich.iTuSo = iTuSo * ps.iTuSo;
	Tich.iMauSo = iMauSo * ps.iMauSo;
	return Tich;
}
PhanSo PhanSo::Thuong(PhanSo ps)
{
	PhanSo Thuong;
	Thuong.iTuSo = iTuSo * ps.iMauSo;
	Thuong.iMauSo = iMauSo * ps.iTuSo;
	return Thuong;
}
float PhanSo::DinhGiaTri()
{
	float GiaTri;
	GiaTri = ((float(iTuSo) /iMauSo));
	return GiaTri;
}