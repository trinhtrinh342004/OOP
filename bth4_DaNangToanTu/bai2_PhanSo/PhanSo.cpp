#include "PhanSo.h"
#include <iostream>
using namespace std;

PhanSo::PhanSo()
{
	iTuSo = 0;
	iMauSo = 1;
}

PhanSo::PhanSo(int a) {
	iTuSo = a;
	iMauSo = 1;
}

PhanSo::PhanSo(int x, int y)
{
	if (y == 0)
	{
		cout << "khong ton tai phan so!";
		iTuSo = 0;
		iMauSo = 1;
	}
	else
	{
		iTuSo = x;
		iMauSo = y;
	}
}
// copy constructor
PhanSo::PhanSo(const PhanSo& d)
{
	iTuSo = d.iTuSo;
	iMauSo = d.iMauSo;
}

PhanSo::~PhanSo()
{

}

istream& operator>>(istream& is, PhanSo& ps)
{
	cout << "Nhap tu so: ";
	is >> ps.iTuSo;
	cout << "Nhap mau so: ";
	is >> ps.iMauSo;
	return is;
}

ostream& operator<<(ostream& os, PhanSo ps)
{
	os << ps.iTuSo;
	if (ps.iMauSo != 1)
		os << "/" << ps.iMauSo << endl;
	return os;
}

PhanSo PhanSo::operator+(PhanSo ps)
{
	PhanSo temp;
	temp.iTuSo = this->iTuSo * ps.iMauSo + this->iMauSo * ps.iTuSo;
	temp.iMauSo = this->iMauSo * ps.iMauSo;
	return temp;
}

PhanSo PhanSo::operator-(PhanSo ps)
{
	PhanSo temp;
	temp.iTuSo = this->iTuSo * ps.iMauSo - this->iMauSo * ps.iTuSo;
	temp.iMauSo = this->iMauSo * ps.iMauSo;
	return temp;
}

PhanSo PhanSo::operator*(PhanSo ps)
{
	PhanSo temp;
	temp.iTuSo = this->iTuSo * ps.iTuSo;
	temp.iMauSo = iMauSo * ps.iMauSo;
	return temp;
}

PhanSo PhanSo::operator/(PhanSo ps)
{
	PhanSo temp;
	temp.iTuSo = this->iTuSo * ps.iMauSo;
	temp.iMauSo = this->iMauSo * ps.iTuSo;
	return temp;
}

bool PhanSo::operator==(PhanSo ps)
{
	return (this->iTuSo * ps.iMauSo == this->iMauSo * ps.iTuSo);
}

bool PhanSo::operator!=(PhanSo ps)
{
	return !(*this == ps);
}

