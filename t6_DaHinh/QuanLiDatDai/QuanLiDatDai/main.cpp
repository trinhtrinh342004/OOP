#include "cNguoi.h"
#include "cSoHong.h"
#include "cSoHongDat0.h"
#include "cSoHongDatNN.h"
#include <iostream>

using namespace std;


int main()
{
	int n;
	cSoHong* dsGiayCN[50];
	
	cout << "Nhap so luong giay chung nhan can cap: ";
	cin >> n;
	int loai;
	for (int i = 0; i < n; i++)
	{
		cout << "Cap giay chung nhan Dat nong nghiep (1) hay dat o (2): ";
		cin >> loai;
		if (loai == 1)
			dsGiayCN[i] = new cSoHongDatNN;
		else
			dsGiayCN[i] = new cSoHongDatO;
		dsGiayCN[i]->Nhap();
	}
	
	long max = dsGiayCN[0]->TinhTienThue();
	int vt = 0;
	for (int i = 1; i < n; i++)
	{
		if (dsGiayCN[i]->TinhTienThue() > max)
		{
			max = dsGiayCN[i]->TinhTienThue();
			vt = i;
		}
	}
	dsGiayCN[vt]->Xuat();
	
	for (int i = 0; i < n; i++)
		if (dsGiayCN[i]->getLoai() == 1)
			if (((cSoHongDatNN*)dsGiayCN[i])->getThoiHan() < 2020)
				dsGiayCN[i]->Xuat();

	return 0;
}