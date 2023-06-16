#pragma once
#include <iostream>
#include <string.h>
using namespace std;

class ThiSinh
{
private:
	long lMaSo;
	string sTen;
	char cNgaySinh[20];
	double dToan;
	double dVan;
	double dAnh;
public:
	void Nhap();
	void Xuat();
	double dTong();
};