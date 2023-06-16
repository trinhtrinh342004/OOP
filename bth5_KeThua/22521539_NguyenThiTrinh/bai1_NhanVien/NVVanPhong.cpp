#include "NVVanPhong.h"
#include <iostream>
using namespace std;


void NVVanPhong::Xuat()
{
	NhanVien::Xuat();
	cout << "So ngay lam viec " << iSoNgayLV << endl;
}

int NVVanPhong::TinhLuong()
{
	return iSoNgayLV * 100000;
}

