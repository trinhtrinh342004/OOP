#include "QuanLiNV.h"
#include <iostream>
using namespace std;

int main()
{
	QuanLiNV  nv;
	int chon;
	do
	{
		cout << "\n=========CT Quan li cac nhan vien duoc khen thuong!=================";
		cout << "\n1. Nhap d/s nhan vien duoc khen thuong.";
		cout << "\n2. Tim nhan vien hanh chinh co thoi gian lam thua nhieu nhat.";
		cout << "\n3. Liet ke nhung nhan vien co so luong san pham ban duoc nhieu hon trung so san pham.";
		cout << "\n4. Dem so nhan vien ban hang.";
		cout << "\n0. Thoat CT.\n";
		cin >> chon;
		switch (chon)
		{
		case 0:
			nv.~QuanLiNV();
			cout << "Dang thoat CT....";
			break;
		case 1:
			if (nv.getSL() > 0)
				nv.~QuanLiNV();
			nv.Nhap();
			break;
		case 2:
			if (nv.getSL() > 0)
			{
				cout << "\nNhan vien hanh chinh co thoi gian lam thua nhieu nhat ";
				nv.Tim_NVHanhChinh_max_TGThua();
			}
			else
				cout << "Chua nhap thong tin!\n";
			break;
		case 3:
			if (nv.getSL() > 0)
			{
				nv.Lietke_NVBanHang_SLSP_NhieuHonTB();
			}
			else
				cout << "Chua nhap thong tin!\n";
			break;
		case 4:
			if (nv.getSL() > 0)
			{
				int dem = nv.Dem_NVBanHang();
				if (dem > 0)
					cout << "\nCo " << dem << " NV ban hang.\n";
				else
					cout << "\nKhong co nhan vien ban hang.\n";
			}
			else
				cout << "\nChua nhap thong tin.\n";
			break;
		default:
			cout << "\nBan chon sai. Moi chon lai.\n";
			break;
		}
	}
	while (chon != 0);
	return 0;
}