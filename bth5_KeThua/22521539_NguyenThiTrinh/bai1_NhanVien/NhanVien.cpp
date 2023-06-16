#include "NhanVien.h"
#include <iostream>
#include <string>

using namespace std;


void NhanVien::Xuat()
{
	cout << "Ho va ten: " << sHoTen << endl;
	cout << "Ngay thang nam sinh d/m/y: " << sNgaySinh << endl;
	cout << "Luong: " << fLuong << endl;
}


int NhanVien::getLuong()
{
	return fLuong;
}