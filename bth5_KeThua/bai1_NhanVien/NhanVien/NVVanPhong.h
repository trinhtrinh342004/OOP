#pragma once
#include "NhanVien.h"
#include <iostream>

using namespace std;

class NVVanPhong : public NhanVien
{
private:
	int iSoNgayLV;
public:
	NVVanPhong(string ten, string ngay, int luong, int soNgayLV) : NhanVien(ten, ngay, luong)
	{
		iSoNgayLV = soNgayLV;
	}
	~NVVanPhong() {};
	void Xuat();
	int TinhLuong();
};