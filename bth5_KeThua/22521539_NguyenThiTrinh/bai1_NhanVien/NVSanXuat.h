#pragma once
#include "NhanVien.h"
#include <iostream>

using namespace std;

class NVSanXuat : public NhanVien
{
private:
	int iSoSP;
	int fLuongCoBan;
public:
	NVSanXuat(string ten, string ngay, int luong, int soSP, int luongCoBan) : NhanVien(ten, ngay, luong)
	{
		iSoSP = soSP;
		fLuongCoBan = luongCoBan;
	}
	~NVSanXuat() {};
	void Xuat();
	int TinhLuong();
};