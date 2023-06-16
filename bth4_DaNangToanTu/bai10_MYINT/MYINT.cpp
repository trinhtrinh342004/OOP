#include "MYINT.h"
MYINT::MYINT()
{
	n = 0;
}
MYINT::~MYINT()
{
}
MYINT::MYINT(int m)
{
	n = m;
}
istream& operator>>(istream& is, MYINT& l)
{
	is >> l.n;
	return is;
}
ostream& operator<<(ostream& os, MYINT& l)
{
	os << l.n << endl;
	return os;
}
MYINT MYINT:: operator+(MYINT& j)
{
	MYINT Tong;
	Tong.n = n - j.n;
	return Tong;
}