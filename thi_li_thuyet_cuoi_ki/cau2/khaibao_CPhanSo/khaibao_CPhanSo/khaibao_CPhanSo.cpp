#include <iostream>
using namespace std;

class CPhanSo
{
private: 
	int ts, ms;
public:
	CPhanSo();
	CPhanSo(int x);
	CPhanSo(int x, int y);
	CPhanSo(const CPhanSo& ps);

	void RutGon();
	CPhanSo operator+(const CPhanSo& ps);
	bool operator==(CPhanSo& ps);

	friend istream& operator>>(istream& is, CPhanSo& x);
	friend ostream& operator<<(ostream& os, const CPhanSo& x);
	~CPhanSo();
};

CPhanSo::CPhanSo()
{
	ts = 0;
	ms = 1;
}

CPhanSo::CPhanSo(int x)
{
	this->ts = x;
	this->ms = 1;
}
CPhanSo::CPhanSo(int x, int y)
{
	this->ts = x;
	this->ms = y;
}

CPhanSo::CPhanSo(const CPhanSo& ps)
{
	this->ts = ps.ts;
	this->ms = ps.ms;
}

void CPhanSo::RutGon()
{
	int ucln;
	int a = abs(ts);
	int b = abs(ms);
	if (ts == 0 && ms == 0)
		ucln = ts + ms;
	else
	{
		while (a != b)
		{
			if (a > b)
				a -= b;
			else
				b -= a;
		}
		ucln = a;
	}
	ts /= ucln;
	ms /= ucln;
}

CPhanSo CPhanSo::operator+(const CPhanSo& ps)
{
	CPhanSo temp;
	temp.ts = this->ts * ps.ms + ps.ts * this->ms;
	temp.ms = this->ms * ps.ms;
	return temp;
}

bool CPhanSo::operator==(CPhanSo& ps)
{
	float s1 =(float) this->ts / this->ms;
	float s2 =(float) ps.ts / ps.ms;
	if(s1 == s2)
		return true;
	return false;
}


istream& operator>>(istream& is, CPhanSo& x)
{
	cout << "Nhap tu so: ";
	is >> x.ts;
	cout << "Nhap mau so: ";
	is >> x.ms;
	return is;
}
ostream& operator<<(ostream& os, const CPhanSo& x)
{
	os << "Tu so: ";
	os << x.ts;
	os << " Mau so: ";
	os << x.ms;
	return os;
}

CPhanSo::~CPhanSo(){}

int main()
{
	return 0;
}

