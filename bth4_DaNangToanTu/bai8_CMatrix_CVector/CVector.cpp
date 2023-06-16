#include "CVector.h"

CVector::CVector()
{
    a = nullptr;
    chieu = 0;
}

CVector::~CVector()
{
    delete[] a;
}

istream& operator>>(istream& is, CVector& vt)
{
    cout << "Nhap so chieu cua vector: ";
    is >> vt.chieu;
    vt.a = new int[vt.chieu];
    cout << "Nhap cac phan tu cua vector:\n";
    for (int i = 0; i < vt.chieu; i++)
    {
        is >> vt.a[i];
    }
    return is;
}

ostream& operator<<(ostream& os, const CVector& vt)
{
    os << "Vector: (";
    for (int i = 0; i < vt.chieu; i++)
    {
        os << vt.a[i];
        if (i != vt.chieu - 1)
            os << ", ";
    }
    os << ")";
    return os;
}
