#include "cNguoi.h"

void cNguoi::Nhap()
{
	cout << "Nhap ho ten: ";
	cin >> sHoTen;
	cout << "Nhap nam sinh: ";
	cin >> iNamSinh;
	cout << "Nhap CMND: ";
	cin >> sCMND;
	cout << "Nhap dia chi: ";
	cin >> sDiaChi;
}
void cNguoi::Xuat()
{
	cout << "Ho ten: " << sHoTen;
	cout << ", Nam sinh: " << iNamSinh;
	cout << ", So CMND: " << sCMND;
	cout << ", Dia chi: " << sDiaChi << endl;
}