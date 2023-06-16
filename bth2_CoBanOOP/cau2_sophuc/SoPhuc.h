#pragma once
#include <iostream>
using namespace std;

class SoPhuc
{
private:
	int iThuc;
	int iAo;
public:
	void Nhap();
	void Xuat();
	SoPhuc Tong(SoPhuc sp);
	SoPhuc Hieu(SoPhuc sp);
	SoPhuc Tich(SoPhuc sp);
	SoPhuc Thuong(SoPhuc sp);
	float Module();
};