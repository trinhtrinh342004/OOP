#pragma once
#include <iostream>
using namespace std;

class NhanVien
{
protected:
	string sHoTen;
	string sNgaySinh;
	int fLuong;
public:
	NhanVien(string ten, string ngay, int luong)
	{
		sHoTen = ten;
		sNgaySinh = ngay;
		fLuong = luong;
	}
	~NhanVien() {};
	virtual void Xuat();
	virtual int TinhLuong() = 0;
	int getLuong();
};