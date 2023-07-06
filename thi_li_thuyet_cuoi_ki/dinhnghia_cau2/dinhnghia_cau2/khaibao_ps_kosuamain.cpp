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

	friend istream& operator>>(istream& is, PhanSo& ps);
	friend ostream& operator<<(ostream& os, const PhanSo& ps);

	PhanSo operator+(const PhanSo&);
	void Xuat();
};

PhanSo::PhanSo()
{
	
}


