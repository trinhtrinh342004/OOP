#include "CTimeSpan.h"
#include <iostream>
using namespace std;

CTimeSpan::CTimeSpan()
{
    iGio = 0;
    iPhut = 0;
    iGiay = 0;
}

CTimeSpan::~CTimeSpan()
{
    // Destructor
}

CTimeSpan::CTimeSpan(int h, int p, int s)
{
    if (h > 23 || h < 0)
    {
        cout << "Nhap lai gio: ";
        cin >> h;
    }
    if (p > 59 || p < 0)
    {
        cout << "Nhap lai phut: ";
        cin >> p;
    }
    if (s > 59 || s < 0)
    {
        cout << "Nhap lai giay: ";
        cin >> s;
    }
    iGio = h;
    iPhut = p;
    iGiay = s;
}

istream& operator>>(istream& is, CTimeSpan& cts)
{
    cout << "Nhap gio: ";
    do
    {
        is >> cts.iGio;
        if (cts.iGio > 23 || cts.iGio < 0)
        {
            cout << "Nhap lai gio: ";
        }
    } while (cts.iGio > 23 || cts.iGio < 0);

    cout << "Nhap phut: ";
    do
    {
        is >> cts.iPhut;
        if (cts.iPhut > 59 || cts.iPhut < 0)
        {
            cout << "Nhap lai phut: ";
        }
    } while (cts.iPhut > 59 || cts.iPhut < 0);

    cout << "Nhap giay: ";
    do
    {
        is >> cts.iGiay;
        if (cts.iGiay > 59 || cts.iGiay < 0)
        {
            cout << "Nhap lai giay: ";
        }
    } while (cts.iGiay > 59 || cts.iGiay < 0);

    return is;
}

ostream& operator<<(ostream& os, const CTimeSpan& cts)
{
    os << "Thoi gian vua nhap la: ";
    os << cts.iGio << ":" << cts.iPhut << ":" << cts.iGiay << endl;
    return os;
}

CTimeSpan CTimeSpan::operator+(const CTimeSpan& h) const
{
    CTimeSpan temp;
    temp.iGiay = this->iGiay + h.iGiay;
    temp.iPhut = this->iPhut + h.iPhut;
    temp.iGio = this->iGio + h.iGio;
    if (temp.iGiay >= 60)
    {
        temp.iGiay -= 60;
        temp.iPhut += 1;
    }
    if (temp.iPhut >= 60)
    {
        temp.iPhut -= 60;
        temp.iGio += 1;
    }
    if (temp.iGio >= 24)
    {
        temp.iGio -= 24;
    }
    return temp;
}

CTimeSpan CTimeSpan::operator-(const CTimeSpan& h) const
{
    CTimeSpan temp;
    temp.iGiay = this->iGiay - h.iGiay;
    temp.iPhut = this->iPhut - h.iPhut;
    temp.iGio = this->iGio - h.iGio;
    if (temp.iGiay < 0)
    {
        temp.iGiay += 60;
        temp.iPhut -= 1;
    }
    if (temp.iPhut < 0)
    {
        temp.iPhut += 60;
        temp.iGio -= 1;
    }
    if (temp.iGio < 0)
    {
        temp.iGio += 24;
    }
    return temp;
}

bool CTimeSpan::operator==(const CTimeSpan& cts) const
{
    return (iGio == cts.iGio && iPhut == cts.iPhut && iGiay == cts.iGiay);
}

bool CTimeSpan::operator!=(const CTimeSpan& cts) const
{
    return !(*this == cts);
}

bool CTimeSpan::operator>(const CTimeSpan& cts) const
{
    if (iGio > cts.iGio)
    {
        return true;
    }
    else if (iGio == cts.iGio && iPhut > cts.iPhut)
    {
        return true;
    }
    else if (iGio == cts.iGio && iPhut == cts.iPhut && iGiay > cts.iGiay)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool CTimeSpan::operator>=(const CTimeSpan& cts) const
{
    return (*this > cts || *this == cts);
}

bool CTimeSpan::operator<(const CTimeSpan& cts) const
{
    return !(*this >= cts);
}

bool CTimeSpan::operator<=(const CTimeSpan& cts) const
{
    return !(*this > cts);
}
