#include "CTime.h"

CTime::CTime()
{
    iGio = 0;
    iPhut = 0;
    iGiay = 0;
}

CTime::CTime(int h, int p, int s)
{
	if (h > 23)
	{
		cout << " vui long nhap lai ham constructor !" << endl;
	}
	if (p > 59)
	{
		cout << " vui long nhap lai ham constructor !" << endl;
	}
	if (s > 59)
	{
		cout << " vui long nhap lai ham constructor !" << endl;
	}
    iGio = h;
    iPhut = p;
    iGiay = s;
}

CTime::CTime(const CTime& d)
{
	iGio = d.iGio;
	iPhut = d.iPhut;
	iGiay = d.iGiay;
}

CTime::~CTime()
{
}

istream& operator>>(istream& is, CTime& ct)
{
	{
		cout << "Nhap gio: ";
		do
		{
			is >> ct.iGio;
			if (ct.iGio > 23 || ct.iGio < 0)
			{
				cout << "Nhap lai gio: ";
			}
		} while (ct.iGio > 23 || ct.iGio < 0);

		cout << "Nhap phut: ";
		do
		{
			is >> ct.iPhut;
			if (ct.iPhut > 59 || ct.iPhut < 0)
			{
				cout << "Nhap lai phut: ";
			}
		} while (ct.iPhut > 59 || ct.iPhut < 0);

		cout << "Nhap giay: ";
		do
		{
			is >> ct.iGiay;
			if (ct.iGiay > 59 || ct.iGiay < 0)
			{
				cout << "Nhap lai giay: ";
			}
		} while (ct.iGiay > 59 || ct.iGiay < 0);
	}
	return is;
}

ostream& operator<<(ostream& os, const CTime& ct)
{
	os << ct.iGio << ":" << ct.iPhut << ":" << ct.iGiay;
	return os;
}

CTime CTime::operator+(const CTime& ct)
{
	CTime temp;
	temp.iGiay = iGiay + ct.iGiay;
	temp.iPhut = iPhut + ct.iPhut + temp.iGiay / 60;
	temp.iGio = iGio + ct.iGio + temp.iPhut / 60;
	temp.iGiay %= 60;
	temp.iPhut %= 60;
	return temp;
}

CTime CTime::operator-(const CTime& ct)
{
	CTime temp;
	int totalGiay1 = iGiay + iPhut * 60 + iGio * 3600;
	int totalGiay2 = ct.iGiay + ct.iPhut * 60 + ct.iGio * 3600;
	int diff = totalGiay1 - totalGiay2;
	if (diff >= 0)
	{
		temp.iGiay = diff % 60;
		temp.iPhut = (diff / 60) % 60;
		temp.iGio = diff / 3600;
	}
	else
	{
		temp.iGiay = -diff % 60;
		temp.iPhut = (-diff / 60) % 60;
		temp.iGio = -diff / 3600;
	}
	return temp;
}

CTime CTime::operator++()
{
	iGiay++;
	if (iGiay >= 60)
	{
		iGiay = 0;
		iPhut++;
		if (iPhut >= 60)
		{
			iPhut = 0;
			iGio++;
			if (iGio >= 24)
			{
				iGio = 0;
			}
		}
	}
	return *this;
}

CTime CTime::operator--()
{
	iGiay--;
	if (iGiay < 0)
	{
		iGiay = 59;
		iPhut--;
		if (iPhut < 0)
		{
			iPhut = 59;
			iGio--;
			if (iGio < 0)
			{
				iGio = 23;
			}
		}
	}
	return *this;
}



