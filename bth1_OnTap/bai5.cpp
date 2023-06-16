#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

struct SinhVien
{
    string sHoTen;
    double dToan;
    double dVan;
};

typedef struct SinhVien SINHVIEN;

void nhap(SINHVIEN &x)
{
    cout << "Nhap ho va ten: ";
    getline(cin, x.sHoTen);
    cout << "Nhap diem toan: ";
    cin >> x.dToan;
    cout << "Nhap diem van: ";
    cin >> x.dVan;
}

void xuat(SINHVIEN x)
{
    cout << "Sinh vien ";
    cout << "Co diem toan la: " << x.dToan << endl;
    cout << "Co diem van la: " << x.dVan << endl;
}

double TrungBinh(SINHVIEN x)
{
    cout << "Co DTB la: ";
    double S;
    S = (x.dToan + x.dVan) / 2;
    return S;
}

int main()
{
    SINHVIEN x;
    nhap(x);
    xuat(x);
    cout << TrungBinh(x) << endl;
    return 0;
}
