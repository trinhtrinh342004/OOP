#include <iostream>
using namespace std;

class DaThuc
{
private:
	int n;
	int* arr;
public:
	DaThuc();

	friend istream& operator>>(istream& is, DaThuc& dt);
	friend ostream& operator<<(ostream& os, const DaThuc& dt);
	
	DaThuc operator+(const DaThuc& dt);
};

DaThuc::DaThuc()
{
	int n = 1;
	arr = new int[1];
	arr[0] = 1;
}

istream& operator>>(istream& is, DaThuc& dt)
{
	cout << "Nhap bac cua da thuc: ";
	int m;
	is >> m;
	dt.n = m;
	dt.arr = new int[dt.n + 1];
	for (int i = dt.n; i >= 0; i--)
	{
		cout << "Nhap he bac: " << i << ": ";
		is >> dt.arr[i];
	}
	return is;
}

ostream& operator<<(ostream& os, const DaThuc& dt)
{
	os << "he so cua bac giam dan la: ";
	for (int i = dt.n; i >=0; i--)
	{
		os << dt.arr[i] << " ";
	}
	return os;
}

DaThuc DaThuc::operator+(const DaThuc& dt)
{
	DaThuc z;
	if (this->n > dt.n)
	{
		z.n = this->n;
		z.arr = new int[z.n + 1];
		for (int i = dt.n; i >= 0; i--)
		{
			z.arr[i] = this->arr[i] + dt.arr[i];
		}
		int j = this->n;
		while (j > dt.n)
		{
			z.arr[j] = this->arr[j];
			j--;
		}
		return z;
	}
	if (this->n < dt.n)
	{
		DaThuc z;
		z.n = dt.n;
		//z = z.KhoiTao(dt.n);
		z.arr = new int[dt.n + 1];
		for (int i = this->n; i >= 0; i--)
		{
			z.arr[i] = this->arr[i] + dt.arr[i];
		}
		int j = z.n;
		while (j > this->n)
		{
			z.arr[j] = dt.arr[j];
			j--;
		}
		return z;
	}
	if (this->n == dt.n)
	{
		DaThuc z;
		z.n = this->n;
		z.arr = new int[this->n + 1];
		//z = z.KhoiTao(x.n);
		for (int i = dt.n; i >= 0; i--)
		{
			z.arr[i] = this->arr[i] + dt.arr[i];
		}
		return z;
	}
}
int main()
{
	return 0;
}