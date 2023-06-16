#include "NVHanhChinh.h"
NVHanhChinh::NVHanhChinh(string ma, string h, int t,int dt,string e, double th):NhanVien(ma,h,t,dt,e), thoiGianThua(th){}
double NVHanhChinh::getThoiGianThua() { return thoiGianThua; }
void NVHanhChinh::setThoiGianThua(double th)
{
	while (th < 0)
	{
		cout << "Nhap thoi gian thua: ";
		cin >> th;
	}
	thoiGianThua = th;
}

void NVHanhChinh::Nhap()
{
	NhanVien::Nhap();
	do
	{
		cout << "Nhap thoi gian thua: ";
		cin >> this->thoiGianThua;
	} while (thoiGianThua < 0);
}

void NVHanhChinh::Xuat()
{
	NhanVien::Xuat();
	cout << "\nLoai " << GetLoai() << "\nThoi gian thua: " << thoiGianThua << endl;
}

string NVHanhChinh::GetLoai()
{
	return "NVHanhChinh";
}
