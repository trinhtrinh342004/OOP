
#include "cSoHongDat0.h"
#include <iostream>

using namespace std;

void cSoHongDatO::Xuat()
{
	cSoHong::Xuat();
	cout << "Tien thue phai dong: " << iDonGiaThue * iDienTich << endl;
}
int cSoHongDatO::getLoai()
{
	return 2;
}