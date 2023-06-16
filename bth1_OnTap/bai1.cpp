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
    cout << "Nhap tu so:  ";
    cin >> ps.iTuSo;
    cout << "Nhap mau so: ";
    cin >> ps.iMauSo;
}

void xuatPhanSo(PHANSO ps)
{
    cout << ps.iTuSo << "/" << ps.iMauSo << endl;
}

int timUCLN(int a, int b)
{
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

PHANSO RutGon(PHANSO ps)
{
    cout << "Rut gon: ";
    PHANSO temp;
    int ucln = timUCLN(ps.iTuSo, ps.iMauSo);
    temp.iTuSo = ps.iTuSo / ucln;
    temp.iMauSo = ps.iMauSo / ucln;
    return temp;
}

int main()
{
    PHANSO ps;
    nhapPhanSo(ps);
    PHANSO rg = RutGon(ps);
    xuatPhanSo(rg);
    return 0;
}
