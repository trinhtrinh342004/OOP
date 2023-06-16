#include "QuanLiNV.h"
#include "NhanVien.h"
#include "NVBanHang.h"
#include "NVHanhChinh.h"

QuanLiNV::QuanLiNV()
{
	nv = NULL;
	sl = 0;
}

QuanLiNV::~QuanLiNV()
{
	if (nv != NULL)
	{
		for (int i = 0; i < sl; i++)
			delete nv[i];
		delete[]nv;
		nv = NULL;
		sl = 0;
	}
}

int QuanLiNV::getSL() { return sl; }

void QuanLiNV::Nhap()
{
	int loai;
	do
	{
		cout << "\nNhap so luong nhan vien duoc khen thuong: ";
		cin >> sl;
	} while (sl < 0);
	nv = new NhanVien * [sl];
	for (int i = 0; i < sl; i++)
	{
		cout << "........................................................................\n";
		cout << "\nNhap nhan vien thu " << i + 1 << "!\n";
		do
		{
			cout << "\nNhap loai nhan vien: (1: Nhan vien ban hang, 2: Nhan vien hanh chinh) ";
			cin >> loai;
		} while (loai <1 || loai > 2);
		if (loai == 1)
			nv[i] = new NVBanHang;
		else
			nv[i] = new NVHanhChinh;
		nv[i]->Nhap();
	}
}

void QuanLiNV::Xuat()
{
	if (nv == NULL)
		cout << "\nDanh sach rong!";
	else
		for (int i = 0; i < sl; i++)
			nv[i]->Xuat();
}


NhanVien* QuanLiNV::Nhap1()
{
	NhanVien* pdt;
	int loai;
	do
	{
		cout << "\nNhap loai nhan vien: (1: Nhan vien ban hang, 2: Nhan vien hanh chinh) ";
		cin >> loai;
	} while (loai < 1 || loai > 2);
	if (loai == 1)
		pdt = new NVBanHang;
	else
		pdt = new NVHanhChinh;
	pdt->Nhap();
	return pdt;
}

void QuanLiNV::Tim_NVHanhChinh_max_TGThua()
{
	double ttmax = -1; int vt = -1;
	// Tìm nhân viên đầu tiên nếu có
	for (int i = 0; i < sl; i++)
	{
		if (nv[i]->GetLoai() == "NVHanhChinh")
		{
			vt = i;
			ttmax = nv[i]->getThoiGianThua();
			break;
		}
	}
	if (vt != -1) //Nếu có NV đầu tiên
	{
		//Tìm số thời gian max
		for (int i = vt + 1; i < sl; i++)
			if (nv[i]->GetLoai() == "NVHanhChinh" && nv[i]->getThoiGianThua() > ttmax)
				ttmax = nv[i]->getThoiGianThua();
		//Liệt kê danh sách các NV có time max
		for (int i = 0; i < sl; i++)
			if (nv[i]->GetLoai() == "NVHanhChinh" && nv[i]->getThoiGianThua() > ttmax)
				nv[i]->Xuat();
	}
	else
		cout << "Khong co danh sach nhan vien!\n";
}
void QuanLiNV::Lietke_NVBanHang_SLSP_NhieuHonTB()
{
	int tongsp = 0;
	int dem = 0;
	for (int i = 0; i < sl; i++)
	{
		if (nv[i]->GetLoai() == "NVBanHang")
		{
			tongsp += nv[i]->getSoSP();
			dem++;
		}
	}

	if (dem > 0) 
	{
		float tb = (float)tongsp / dem; 
		bool nvbh = false; 

		for (int i = 0; i < sl; i++)
		{
			if (nv[i]->GetLoai() == "NVBanHang" && nv[i]->getSoSP() > tb)
			{
				cout << "\nNhan vien nhan vien ban hang co san pham tren trung binh:\n";
				nv[i]->Xuat();
				nvbh = true;
			}
		}

		if (!nvbh)
		{
			cout << "\nKhong co nhan vien nhan vien ban hang co san pham tren trung binh.\n";
		}
	}
	else 
	{
		cout << "\nKhong co nhan vien ban hang trong danh sach.\n";
	}
}

int QuanLiNV::Dem_NVBanHang()
{
	int dem = 0;
	for (int i = 0; i < sl; i++)
		if (nv[i]->GetLoai() == "NVBanHang")
			dem++;
	return dem;
}