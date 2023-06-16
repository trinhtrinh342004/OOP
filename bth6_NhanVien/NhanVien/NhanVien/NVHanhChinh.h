#pragma once
#include "NhanVien.h"
class NVHanhChinh :
    public NhanVien
{
private:
	double thoiGianThua;
public:
	NVHanhChinh(string = "", string = "", int = 0, int = 0, string = "", double = 0);
	double getThoiGianThua();
	void setThoiGianThua(double);
	void Nhap();
	void Xuat();
	string GetLoai();
};

