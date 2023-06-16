#include <iostream>
using namespace std;

struct Ngay
{
    int iNgay;
    int iThang;
    int iNam;
};

typedef Ngay NGAY;

void nhapNgay(NGAY &x)
{
    cout << "Nhap ngay: ";
    cin >> x.iNgay;
    cout << "Nhap thang: ";
    cin >> x.iThang;
    cout << "Nhap nam: ";
    cin >> x.iNam;
}

void xuatNgay(NGAY x)
{
    cout << x.iNgay << "/" << x.iThang << "/" << x.iNam << endl;
}

int ktNhuan(NGAY x)
{
    if((x.iNam % 4 == 0) && (x.iNam % 100 != 0))
        return 1;
    if((x.iNam % 4 == 0))
        return 1;
    return 0;
}

NGAY KeTiep(NGAY x)
{
    int NgayThang[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (ktNhuan(x) == 1)
      NgayThang[1] = 29;
      x.iNgay++;
    if (x.iNgay > NgayThang[x.iThang - 1])
    {
        x.iThang++;
        if (x.iThang > 12)
        {
            x.iNam++;
            x.iThang = 1;
        }
        x.iNgay = 1;
    }
    return x;
}

int main()
{
    NGAY x;
    nhapNgay(x);
    xuatNgay(x);
    NGAY kq = KeTiep(x);
    cout << "Ngay bat dau la: ";
    xuatNgay(x);
    cout << "Ngay ke tiep la: ";
    xuatNgay(kq);
    return 0;
}
