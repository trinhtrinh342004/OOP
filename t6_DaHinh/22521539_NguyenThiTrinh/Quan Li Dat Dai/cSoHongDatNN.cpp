
#include "cSoHongDatNN.h"
#include <iostream>

using namespace std;

int cSoHongDatNN::getThoiHan()
{
	return iThoiHan;
}
void cSoHongDatNN::Nhap()
{
	cSoHong::Nhap();
	cout << "Nhap thoi han su dung: ";
	cin >> iThoiHan;
}
void cSoHongDatNN::Xuat()
{
	cSoHong::Xuat();
	cout << "Thoi han su dung: " << iThoiHan << endl;
	cout << "Tien thue phai dong: " << iDonGiaThue * iDienTich << endl;
}
int cSoHongDatNN::getLoai()
{
	return 1;
}