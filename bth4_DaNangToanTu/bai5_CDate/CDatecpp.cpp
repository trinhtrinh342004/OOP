#include <iostream>
#include "CDate.h"
using namespace std;

CDate::CDate()
{
	iNgay = 1;
	iThang = 1;
	iNam = 1;
}

CDate::CDate(int x, int y, int z)
{
	iNgay = x;
	iThang = y;
	iNam = z;
}

CDate::CDate(const CDate& d)
{
	iNgay = d.iNgay;
	iThang = d.iThang;
	iNam = d.iNam;
}

CDate::~CDate()
{
}

istream& operator>>(istream& is, CDate& cd)
{
	cout << "Nhap ngay: ";
	is >> cd.iNgay;
	cout << "Nhap thang: ";
	is >> cd.iThang;
	cout << "Nhap nam: ";
	is >> cd.iNam;
	return is;
}

ostream& operator<<(ostream& os, const CDate& cd)
{
	os << cd.iNgay << "/" << cd.iThang << "/" << cd.iNam << endl;
	return os;
}


int CDate::MaxDay(int M, int Y)
{
	if ((M == 1) || (M == 3) || (M == 5) || (M == 7) || (M == 8) || (M == 10) || (M == 12))
		return 31;
	if (M == 2)
	{
		if (Y % 400 == 0 || (Y % 4 == 0 && Y % 100 != 0))
			return 29;
		return 28;
	}
	return 30;
}

CDate CDate::operator++()
{
	iNgay++;
	if (iNgay > MaxDay(iThang, iNam))
	{
		iNgay = 1;
		iThang++;
		if (iThang > 12)
		{
			iThang = 1;
			iNam++;
		}
	}
	return (*this);
}

CDate CDate::operator--()
{
	iNgay = iNgay - 1;
	if (iNgay == 0)
	{
		if (iThang - 1 == 0)
		{
			iNgay = 31;
			iThang = 12;
			iNam--;
		}
		else
		{
			iNgay = MaxDay(iThang - 1, iNam);
			iThang--;
		}
	}
	return (*this);
}

CDate CDate::operator+(int n)
{
	CDate tmp = *this;
	for (int i = 0; i < n; i++)
		++tmp;
	return tmp;
}

CDate CDate::operator-(int n)
{
	CDate tmp = *this;
	for (int i = 0; i < n; i++)
		--tmp;
	return tmp;
}