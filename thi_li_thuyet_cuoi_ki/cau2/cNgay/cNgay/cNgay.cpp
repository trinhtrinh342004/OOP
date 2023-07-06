#include <iostream>
using namespace std;

class cNgay
{
private:
	int ngay, thang, nam;
public:
	cNgay();
	cNgay(int x, int y);
	cNgay(int x, int y, int z);
	~cNgay();

	friend istream& operator>>(istream& is, cNgay& n);
	friend ostream& operator<<(ostream& os, const cNgay& n);
	bool operator<(cNgay& ngay);
};

cNgay::cNgay()
{
	ngay = thang = nam = 1;
}

cNgay::cNgay(int x, int y)
{
	this->nam = x;
	this->thang = y;
	this->ngay = 1;
}

cNgay::cNgay(int x, int y, int z)
{
	this->nam = x;
	this->thang = y;
	this->ngay = z;
}

cNgay::~cNgay(){}

istream& operator>>(istream& is, cNgay& n)
{
	cout << "Nhap ngay: ";
	is >> n.ngay;
	cout << "Nhap gio: ";
	is >> n.thang;
	cout << "Nhap nam: ";
	is >> n.nam;
	return is;
}

ostream& operator<<(ostream& os, const cNgay& n)
{
	os << "Ngay " << n.ngay << " Thang " << n.thang << " Nam " << n.nam;
	return os;
}

bool cNgay::operator<(cNgay& n)
{
	if (this->nam <= n.nam)
	{
		if (this->nam < n.nam)
			return true;
		else
		{
			if (this->thang <= n.thang)
			{
				if (this->thang < n.thang)
					return true;
				else
				{
					if (this->ngay < n.ngay)
						return true;
				}
			}
		}
	}
	return false;
}
int main()
{
	return 0;
}