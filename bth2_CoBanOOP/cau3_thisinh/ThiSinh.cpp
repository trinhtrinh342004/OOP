#include "ThiSinh.h"
#include <iostream>
#include <string>
using namespace std;

void ThiSinh::Nhap()
{
	cout << "Nhap ten thi sinh: " << "\t";
	cin >> sTen;

	cout << "Nhap thong tin cua thi sinh! " << endl;
	cout << "Nhap MS: ";
	cin >> lMaSo;

	cout << "Nhap ngay thang nam sinh: ";
	cin >> cNgaySinh;

	cout << "Nhap diem Toan: ";
	cin >> dToan;

	cout << "Nhap diem Van: ";
	cin >> dVan;

	cout << "Nhap diem Anh: ";
	cin >> dAnh;
	cout << endl;
}

void ThiSinh::Xuat()
{
	cout << "Thi Sinh " << sTen << endl;
	cout << "MS: " << lMaSo << " Ngay thang:" << cNgaySinh << " Toan:" << dToan << " Van:" << dVan << " Anh:" << dAnh << endl;
}

double ThiSinh::dTong()
{
	double s;
	s = dToan + dVan + dAnh;
	return s;
}