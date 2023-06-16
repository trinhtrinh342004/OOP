#include "cSoHong.h"
#include <iostream>

using namespace std;

void cSoHong::Nhap()
{
	cout << "Nhap so luong nguoi dung ten tren so hong: ";
	cin >> iSoNguoiSoHuu;
	dsNguoiSoHuu = new cNguoi[iSoNguoiSoHuu];
	for (int i = 0; i < iSoNguoiSoHuu; i++)
	{
		cout << "Nhap thong tin nguoi so huu thu " << (i + 1) << endl;
		dsNguoiSoHuu[i].Nhap();
	}
	cout << "Nhap so giay chung nhan: ";
	cin >> sSoGiayCN;
	cout << "Nhap so thua: ";
	cin >> iSoThua;
	cout << "Nhap so to ban do: ";
	cin >> iSoToBanDo;
	cout << "Nhap dia chi thua dat: ";
	cin >> sDiaChi;
	cout << "Nhap dien tich: ";
	cin >> iDienTich;
	cout << "Nhap ngay cap giay chung nhan: ";
	cin >> sNgayCap;
	cout << "Nhap don gia thue: ";
	cin >> iDonGiaThue;
}
void cSoHong::Xuat()
{
	cout << "So giay chung nhan: " << sSoGiayCN << endl;
	for (int i = 0; i < iSoNguoiSoHuu; i++)
	{
		dsNguoiSoHuu[i].Xuat();
	}
	cout << "So thua dat: " << iSoThua << endl;
	cout << "So to ban do: " << iSoToBanDo << endl;
	cout << "Dia chi thua dat: " << sDiaChi << endl;
	cout << "Dien tich thua dat: " << iDienTich << endl;
	cout << "Ngay cap: " << sNgayCap << endl;
	cout << "Don gia thue: " << iDonGiaThue << endl;
}
long cSoHong::TinhTienThue()
{
	return iDienTich * iDonGiaThue;
}