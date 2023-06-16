#pragma once
#include "NhanVien.h"
class NVBanHang : public NhanVien
{
private:
	int soSP;
public:
	NVBanHang(string = "", string = "", int = 0, int = 0, string = "", int = 0);
	int getSoSP();
	void setSoSP(int);
	void Nhap();
	void Xuat();
	string GetLoai();
};

