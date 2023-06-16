#include "SoPhuc.h"
#include <iostream>
using namespace std;

SoPhuc::SoPhuc()
{
	fThuc = 1;
	fAo = 1;
}
SoPhuc::SoPhuc(float x, float y)
{
	fThuc = x;
	fAo = y;
}
SoPhuc::SoPhuc(const SoPhuc& d)
{
	fThuc = d.fThuc;
	fAo = d.fAo;
}

SoPhuc::~SoPhuc()
{

}

istream& operator>>(istream& is, SoPhuc& sp)
{
	cout << "Nhap phan thuc: " ;
	is >> sp.fThuc;
	cout << "Nhap phan ao: ";
	is >> sp.fAo;
	return is;
}

ostream& operator<<(ostream& os, SoPhuc sp)
{
	os << sp.fThuc;
	if (sp.fAo > 0)
		os << " + ";
	os << sp.fAo << "i" << endl;
	return os;
}

SoPhuc SoPhuc::operator+(SoPhuc sp)
{
	SoPhuc temp;
	temp.fThuc = this->fThuc + sp.fThuc;
	temp.fAo = this->fAo + sp.fAo;
	return temp;
}

SoPhuc SoPhuc::operator-(SoPhuc sp)
{
	SoPhuc temp;
	temp.fThuc = this->fThuc - sp.fThuc;
	temp.fAo = this->fAo - sp.fAo;
	return temp;
}

SoPhuc SoPhuc::operator*(SoPhuc sp)
{
	SoPhuc temp;
	temp.fThuc = this->fThuc * sp.fThuc - this->fAo * sp.fAo;
	temp.fAo = this->fThuc * sp.fAo + this->fAo * sp.fThuc;
	return temp;
}

SoPhuc SoPhuc::operator/(SoPhuc sp)
{
	SoPhuc temp;
	temp.fThuc = (this->fThuc * sp.fThuc + this->fAo * sp.fAo) / (sp.fThuc * sp.fThuc + sp.fAo * sp.fAo);
	temp.fThuc = (this->fAo * sp.fThuc - this->fThuc * sp.fAo) / (sp.fThuc * sp.fThuc + sp.fAo * sp.fAo);
	return temp;
}

bool SoPhuc::operator==(SoPhuc sp)
{
	return ((this->fThuc == sp.fThuc) && (this->fAo == sp.fAo));
}

bool SoPhuc::operator!=(SoPhuc sp)
{
	return !(*this==sp);
}



