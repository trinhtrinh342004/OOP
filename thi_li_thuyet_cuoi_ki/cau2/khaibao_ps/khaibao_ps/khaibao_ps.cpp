#include <iostream>
using namespace std;

class PhanSo
{
private:
	int ts, ms;
public:
	PhanSo();
	PhanSo(int x);
	PhanSo(int x, int y);
	~PhanSo();

	int ucln(int a, int b);
	PhanSo reduced();
	friend istream& operator>>(istream& is, PhanSo& ps);
	friend ostream& operator<<(ostream& os, const PhanSo& ps);

	PhanSo operator+(const PhanSo&);
	void Xuat();
};

PhanSo::PhanSo()
{
	ts = ms = 0;
}

PhanSo::PhanSo(int x)
{
	ts = x;
	ms = 1;
}

PhanSo::PhanSo(int x, int y)
{
	ts = x;
	ts = y;
}

PhanSo::~PhanSo(){}

istream& operator>>(istream& is, PhanSo& ps)
{
	cout << "Tu so: ";
	is >> ps.ts;
	cout << "Mau so: ";
	is >> ps.ms;
	return is;
}

ostream& operator<<(ostream& os, const PhanSo& ps)
{
	os << ps.ts << "/" << ps.ms;
	return os;
}

PhanSo PhanSo::operator+(const PhanSo& y)
{
	PhanSo temp;
	temp.ts = this->ts * y.ms + this->ms * y.ts;
	temp.ms = this->ms * y.ms;
	return temp;
}

int PhanSo::ucln(int a, int b)
{
	if (b == 0)
		return a;
	if (a % b == 0)
		return b;
	return ucln(b, a % b);
}

PhanSo PhanSo::reduced()
{
	int z = ucln(ts, ms);
	return PhanSo(ts / z, ms / z);
}

void PhanSo::Xuat()
{
	cout << ts << "/" << ms;
}

