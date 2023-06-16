#include <iostream>
#include <vector>
#include <algorithm>
#include "NhanVien.h"
#include "NVSanXuat.h"
#include "NVVanPhong.h"
#include "CongTy.h"
using namespace std;

int main()
{
    CongTy congTy;
    int choice;

    do {
        cout << "========= MENU =========" << endl;
        cout << "1. Nhap danh sach nhan vien" << endl;
        cout << "2. Tinh luong cho tung nhan vien" << endl;
        cout << "3. Xuat thong tin nhan vien" << endl;
        cout << "4. Tinh tong luong cong ty" << endl;
        cout << "5. Tim nhan vien co luong cao nhat" << endl;
        cout << "6. Tim nhan vien co luong thap nhat" << endl;
        cout << "7. Sap xep danh sach nhan vien theo luong giam dan" << endl;
        cout << "0. Thoat" << endl;
        cout << "=========================" << endl;
        cout << "Nhap lua chon cua ban: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            congTy.NhapDanhSachNhanVien();
            break;
        case 2:
            congTy.TinhLuongChoTungNhanVien();
            break;
        case 3:
            congTy.XuatThongTinNhanVien();
            break;
        case 4:
            cout << "Tong luong cong ty: " << congTy.TinhTongLuong() << endl;
            break;
        case 5:
        {
            NhanVien* nvMax = congTy.TimNhanVienCoLuongCaoNhat();
            if (nvMax != nullptr)
            {
                cout << "Nhan vien co luong cao nhat: " << endl;
                nvMax->Xuat();
            }
            else
            {
                cout << "Khong co nhan vien trong cong ty." << endl;
            }
            break;
        }
        case 6:
        {
            NhanVien* nvMin = congTy.TimNhanVienCoLuongThapNhat();
            if (nvMin != nullptr)
            {
                cout << "Nhan vien co luong thap nhat: " << endl;
                nvMin->Xuat();
            }
            else
            {
                cout << "Khong co nhan vien trong cong ty." << endl;
            }
            break;
        }
        case 7:
            congTy.SapXepDanhSachNhanVienTheoLuongGiamDan();
            cout << "Danh sach nhan vien sau khi sap xep:" << endl;
            congTy.XuatThongTinNhanVien();
            break;
        case 0:
            cout << "Thoat chuong trinh." << endl;
            break;
        default:
            cout << "Lua chon khong hop le. Vui long thu lai." << endl;
            break;
        }

        cout << endl;

    } while (choice != 0);

    return 0;
}