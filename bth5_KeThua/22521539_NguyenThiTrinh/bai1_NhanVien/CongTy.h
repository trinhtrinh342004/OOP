#pragma once
#include <vector>
#include <iostream>
#include "NhanVien.h"
using namespace std;

class CongTy
{
private:
    vector<NhanVien*> dsNhanVien;

public:
    void NhapDanhSachNhanVien();
    void TinhLuongChoTungNhanVien();
    void XuatThongTinNhanVien();
    int TinhTongLuong();
    NhanVien* TimNhanVienCoLuongCaoNhat();
    NhanVien* TimNhanVienCoLuongThapNhat();
    void SapXepDanhSachNhanVienTheoLuongGiamDan();
};

