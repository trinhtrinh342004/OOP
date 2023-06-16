#pragma once
#include <iostream>
#include <string>
using namespace std;
class NhanVien
{
protected:
	string maNV;
	string hoTen;
	int tuoi;
	int sdt;
	string email;
public:
	NhanVien(string = "", string = "", int = 0, int = 0, string = "");
	string getMaNV();
	string getHoTen();
	int getTuoi();
	int getSDT();
	string getEmail();
	void setHoTen(string);
	void setTuoi(int);
	void setSDT(int);
	void setEmail(string);
	virtual int getSoSP();
	virtual double getThoiGianThua();
	virtual void setSoSP(int);
	virtual void setThoiGianThua(double);
	virtual void Nhap();
	virtual void Xuat();
	virtual string GetLoai() = 0;
};

