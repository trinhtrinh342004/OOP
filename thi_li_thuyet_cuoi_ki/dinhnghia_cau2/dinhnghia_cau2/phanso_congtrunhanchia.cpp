#include <iostream>
using namespace std;

class PhanSo
{
private:
	int ts;
	int ms;
public:
	PhanSo();
	PhanSo(int x, int y);
	~PhanSo();

	friend istream& operator>>(istream& is, PhanSo& ps);
	friend ostream& operator<<(ostream& os, const PhanSo& ps);

	PhanSo operator+(const PhanSo&);
	PhanSo operator-(const PhanSo&);
};

PhanSo::PhanSo()
{
	ts = 0;
	ms = 1;
}

PhanSo::PhanSo(int x, int y)
{
	this->ts = x;
	this->ms = y;
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

PhanSo PhanSo::operator+(const PhanSo & y)
{
	PhanSo temp;
	temp.ts = this->ts * y.ms + this->ms * y.ts;
	temp.ms = this->ms * y.ms;
	return temp;
}

PhanSo PhanSo::operator-(const PhanSo& y)
{
	PhanSo temp;
	temp.ts = this->ts * y.ms - this->ms * y.ts;
	temp.ms = this->ms * y.ms;
	return temp;
}

int main()
{
	return 0;
}