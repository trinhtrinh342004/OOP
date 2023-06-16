#include "DaThuc.h"
using namespace std;

DaThuc::DaThuc()
{
	n = 0;
	for (int i = 0; i < 20; i++)
		a[i] = 0;
}

DaThuc::~DaThuc()
{

}

istream& operator>>(istream& is, DaThuc& dt)
{
	cout << "Nhap vao bac cua da thuc: ";
	is >> dt.n;

	cout << "Nhap vap cac he so cua da thuc: ";
	for (int i = dt.n; i >= 0; i--)
	{
		is >> dt.a[i];
	}

	return is;
}

ostream& operator<<(ostream& os, DaThuc& dt)
{
	os << "Da thuc: ";
	for (int i = dt.n; i >= 0; i--)
	{
		os << dt.a[i] << "x^" << i;
		if (i != 0)
			os << "+";
	}
	return os;
}

DaThuc DaThuc::operator+( DaThuc& dt) 
{
	DaThuc result;
	result.n = std::max(n, dt.n);

	for (int i = 0; i <= result.n; i++)
	{
		if (i <= n)
			result.a[i] += a[i];

		if (i <= dt.n)
			result.a[i] += dt.a[i];
	}

	return result;
}

DaThuc DaThuc::operator-( DaThuc& dt)
{
	DaThuc result;
	result.n = std::max(n, dt.n);

	for (int i = 0; i <= result.n; i++)
	{
		if (i <= n)
			result.a[i] += a[i];

		if (i <= dt.n)
			result.a[i] -= dt.a[i];
	}

	return result;
}