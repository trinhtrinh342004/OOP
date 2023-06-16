#include <iostream>
using namespace std;

struct PhanSo
{
    int iTuSo;
    int iMauSo;
};

typedef PhanSo PHANSO;

void nhapPhanSo(PHANSO &ps)
{
    cout << "Nhap tu so: ";
    cin >> ps.iTuSo;
    cout << "Nhap mau so: ";
    cin >> ps.iMauSo;
}

void xuatPhanSo(PHANSO ps)
{
    cout << ps.iTuSo << "/" << ps.iMauSo << endl;
}

int soSanhPhanSo(PHANSO x, PHANSO y)
{
    double a = (double) x.iTuSo / x.iMauSo;
    double b = (double) y.iTuSo / y.iMauSo;
    if (a > b)
        return 1;
    if (a < b)
        return -1;
    else
        return 0;
}

int main()
{
    PHANSO x, y;
    nhapPhanSo(x);
    nhapPhanSo(y);
    int ss = soSanhPhanSo(x, y);
    switch (ss)
    {
    case 1:
        cout << "Phan so lon nhat: ";
        xuatPhanSo(x);
        break;
    case -1:
        cout << "Phan so lon nhat: ";
        xuatPhanSo(y);
        break;
    case 0:
        cout << "Phan so bang nhau: ";
        break;
    }
    return 0;
}
