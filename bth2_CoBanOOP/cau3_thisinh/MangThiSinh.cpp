#include "MangThiSinh.h"

void MangThiSinh::NhapDS()
{
	cout << "Nhap so luong thi sinh: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		dsThiSinh[i].Nhap();
	}
}

void MangThiSinh::XuatThoaDK()
{
	for (int i = 0; i < n; i++)
	{
		if (dsThiSinh[i].dTong() > 15)
		{
			dsThiSinh[i].Xuat();
		}
	}
}