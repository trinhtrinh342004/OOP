#pragma once
#include "cNguoi.h"
#include <iostream>

using namespace std;

class cSoHong
{
protected:
	string sSoGiayCN;
	int iSoNguoiSoHuu;
	cNguoi* dsNguoiSoHuu;
	int iSoThua;
	int iSoToBanDo;
	string sDiaChi;
	int iDienTich;
	string sNgayCap;
	int iDonGiaThue;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual long TinhTienThue();
	virtual int getLoai() = 0;
};