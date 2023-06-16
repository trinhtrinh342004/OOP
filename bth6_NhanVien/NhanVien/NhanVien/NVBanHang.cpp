#include "NVBanHang.h"
NVBanHang::NVBanHang(string ma, string ht, int t, int dt, string e, int sp) : NhanVien(ma, ht, t, dt, e) , soSP(sp){}
int NVBanHang::getSoSP() { return soSP; }
void NVBanHang::setSoSP(int sp)
{ 
	while (sp < 0)
	{
		cout << "Nhap so san pham: ";
		cin >> sp;
	}
	soSP = sp;
}

void NVBanHang::Nhap()
{
	NhanVien::Nhap();
	do
	{
		cout << "Nhap so san pham: ";
		cin >> this->soSP;
	} while (soSP < 0);
}

void NVBanHang::Xuat()
{
	NhanVien::Xuat();
	cout << "\nLoai: " << GetLoai() << "\nSo san pham: " << soSP << endl;
}

string NVBanHang::GetLoai()
{
	return "NVBanHang";
}