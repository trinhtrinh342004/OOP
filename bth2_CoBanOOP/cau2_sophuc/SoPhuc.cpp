#include "SoPhuc.h"
#include <iostream>
using namespace std;

void SoPhuc::Nhap()
{
	cout << "Nhap phan thuc va phan ao: ";
	cin >> iThuc >> iAo;
}

void SoPhuc::Xuat()
{
	cout << iThuc << ";" << iAo;
}

SoPhuc SoPhuc::Tong(SoPhuc sp)
{
	SoPhuc Tong;
	Tong.iThuc = iThuc + sp.iThuc;
	Tong.iAo = iAo + sp.iAo;
	return Tong;
}

SoPhuc SoPhuc::Hieu(SoPhuc sp)
{
	SoPhuc Hieu;
	Hieu.iThuc = iThuc - sp.iThuc;
	Hieu.iAo = iAo - sp.iAo;
	return Hieu;
}

SoPhuc SoPhuc::Tich(SoPhuc sp)
{
	SoPhuc Tich;
	Tich.iThuc = iThuc * iAo - sp.iThuc * sp.iAo;
	Tich.iAo = iThuc * sp.iAo + iAo * sp.iThuc;
	return Tich;
}

SoPhuc SoPhuc::Thuong(SoPhuc sp)
{
	SoPhuc Thuong;
	Thuong.iThuc = (iThuc * iAo + sp.iThuc * iAo) / (pow(iAo, 2) + pow(sp.iAo, 2));
	Thuong.iAo = (iAo * sp.iThuc - iThuc * sp.iAo) / (pow(iAo, 2) + pow(sp.iAo, 2));
	return Thuong;
}

float SoPhuc::Module()
{
	float A;
	A = sqrt(pow(iThuc, 2) + pow(iAo, 2));
	return A;
}