#pragma once
#include <iostream>
using namespace std;

class PhanSo
{
private: 
	int iTuSo;
	int iMauSo;
public:
	void Nhap();
	void Xuat();
	PhanSo Tong(PhanSo ps);
	PhanSo Hieu(PhanSo ps);
	PhanSo Tich(PhanSo ps);
	PhanSo Thuong(PhanSo ps);
	float DinhGiaTri();
};
