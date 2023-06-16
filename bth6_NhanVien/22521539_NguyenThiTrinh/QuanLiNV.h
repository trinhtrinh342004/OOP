#pragma once
#include "NhanVien.h"
class QuanLiNV
{
private:
	NhanVien** nv;
	int sl;
public:
	QuanLiNV();
	~QuanLiNV();
	int getSL();
	void Nhap();
	void Xuat();
	NhanVien* Nhap1();
	void Tim_NVHanhChinh_max_TGThua();
	void Lietke_NVBanHang_SLSP_NhieuHonTB();
	int Dem_NVBanHang();
};

