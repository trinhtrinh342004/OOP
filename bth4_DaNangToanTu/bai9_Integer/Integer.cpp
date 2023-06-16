#include "Integer.h"
INTEGER::INTEGER()
{
	n = 0;
}
INTEGER::~INTEGER()
{
}
INTEGER::INTEGER(int m)
{
	n = m;
}
istream& operator>>(istream& is, INTEGER& l)
{
	is >> l.n;
	return is;
}
ostream& operator<<(ostream& os, INTEGER& l)
{
	os << l.n << endl;
	return os;
}
INTEGER INTEGER:: operator+(INTEGER& j)
{
	INTEGER Tong;
	Tong.n = n + j.n;
	return Tong;
}
INTEGER INTEGER:: operator*(INTEGER& j)
{
	INTEGER Tich;
	Tich.n = n * j.n;
	return Tich;
}
void INTEGER:: operator++()
{
	n++;
}
