#include "NVSanXuat.h"
#include <iostream>
using namespace std;

void NVSanXuat::Xuat()
{
	NhanVien::Xuat();
	cout << "So san pham " << iSoSP;
}

int NVSanXuat::TinhLuong()
{
	return (fLuongCoBan + iSoSP * 5000);
}

