#include "NhanVien.h"
#include "NVSanXuat.h"
#include "NVVanPhong.h"
#include "CongTy.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void CongTy::NhapDanhSachNhanVien()
{
    int n;
    cout << "Nhap so luong nhan vien: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int loaiNV;
        cout << "Nhap loai nhan vien (1 - NV San Xuat, 2 - NV Van Phong): ";
        cin >> loaiNV;

        NhanVien* nv = nullptr;

        if (loaiNV == 1)
        {
            string ten, ngay;
            int luong;
            int soSP;
            int luongCoBan;

            cout << "Nhap ho ten: ";
            cin.ignore();
            getline(cin, ten);
            cout << "Nhap ngay sinh: ";
            getline(cin, ngay);
            cout << "Nhap luong: ";
            cin >> luong;
            cout << "Nhap so san pham: ";
            cin >> soSP;
            cout << "Nhap luong co ban: ";
            cin >> luongCoBan;

            nv = new NVSanXuat(ten, ngay, luong, soSP, luongCoBan);
        }
        else if (loaiNV == 2)
        {
            string ten, ngay;
            int luong;
            int soNgayLV;

            cout << "Nhap ho ten: ";
            cin.ignore();
            getline(cin, ten);
            cout << "Nhap ngay sinh: ";
            getline(cin, ngay);
            cout << "Nhap luong: ";
            cin >> luong;
            cout << "Nhap so ngay lam viec: ";
            cin >> soNgayLV;

            nv = new NVVanPhong(ten, ngay, luong, soNgayLV);
        }

        if (nv != nullptr)
        {
            dsNhanVien.push_back(nv);
        }
    }
}

void CongTy::TinhLuongChoTungNhanVien()
{
    for (NhanVien* nv : dsNhanVien)
    {
        int luong = nv->TinhLuong();
        nv->Xuat();
        cout << "Luong: " << luong << endl;
    }
}

void CongTy::XuatThongTinNhanVien()
{
    for (NhanVien* nv : dsNhanVien)
    {
        nv->Xuat();
    }
}

int CongTy::TinhTongLuong()
{
    int tongLuong = 0;

    for (NhanVien* nv : dsNhanVien)
    {
        tongLuong += nv->getLuong();
    }

    return tongLuong;
}

NhanVien* CongTy::TimNhanVienCoLuongCaoNhat()
{
    if (dsNhanVien.empty())
    {
        return nullptr;
    }

    NhanVien* nvMax = dsNhanVien[0];
    double maxLuong = nvMax->getLuong();

    for (NhanVien* nv : dsNhanVien)
    {
        double luong = nv->getLuong();
        if (luong > maxLuong)
        {
            maxLuong = luong;
            nvMax = nv;
        }
    }

    return nvMax;
}

NhanVien* CongTy::TimNhanVienCoLuongThapNhat()
{
    if (dsNhanVien.empty())
    {
        return nullptr;
    }

    NhanVien* nvMin = dsNhanVien[0];
    double minLuong = nvMin->getLuong();

    for (NhanVien* nv : dsNhanVien)
    {
        double luong = nv->getLuong();
        if (luong < minLuong)
        {
            minLuong = luong;
            nvMin = nv;
        }
    }

    return nvMin;
}

bool SoSanhLuongGiamDan(NhanVien* nv1, NhanVien* nv2)
{
    return nv1->getLuong() > nv2->getLuong();
}

void CongTy::SapXepDanhSachNhanVienTheoLuongGiamDan()
{
    sort(dsNhanVien.begin(), dsNhanVien.end(), SoSanhLuongGiamDan);
}