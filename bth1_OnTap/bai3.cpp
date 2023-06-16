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

PHANSO tongPhanSo(PHANSO x, PHANSO y)
{
    cout << "Tong phan so: ";
    PHANSO s;
    s.iTuSo = x.iTuSo * y.iMauSo + x.iMauSo * y.iTuSo;
    s.iMauSo = x.iMauSo * y.iMauSo;
    return s;
}

PHANSO hieuPhanSo(PHANSO x, PHANSO y)
{
    cout << "Hieu phan so: ";
    PHANSO h;
    h.iTuSo = x.iTuSo * y.iMauSo - x.iMauSo * y.iTuSo;
    h.iMauSo = x.iMauSo * y.iMauSo;
    return h;
}

PHANSO tichPhanSo(PHANSO x, PHANSO y)
{
    cout << "Tich phan so: ";
    PHANSO t;
    t.iTuSo = x.iTuSo * y.iTuSo;
    t.iMauSo = x.iMauSo * y.iMauSo;
    return t;
}

PHANSO thuongPhanSo(PHANSO x, PHANSO y)
{
    cout << "Thuong phan so: ";
    PHANSO th;
    th.iTuSo = x.iTuSo * y.iMauSo;
    th.iMauSo = x.iMauSo * y.iTuSo;
    return th;
}

int main()
{
    PHANSO x, y, kq;
    cout << "Phan so x " << endl;
    nhapPhanSo(x);
    cout << "Phan so y" << endl;
    nhapPhanSo(y);
    kq = tongPhanSo(x, y);
    xuatPhanSo(kq);
    kq = hieuPhanSo(x, y);
    xuatPhanSo(kq);
    kq = tichPhanSo(x, y);
    xuatPhanSo(kq);
    kq = thuongPhanSo(x, y);
    xuatPhanSo(kq);
    return 0;
}
