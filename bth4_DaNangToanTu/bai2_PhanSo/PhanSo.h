#pragma once
#include <iostream>
using namespace std;

class PhanSo
{
private:
	int iTuSo;
	int iMauSo;
public:
	PhanSo();
	PhanSo(int x, int y);
	PhanSo(int a);
	// copy constructor
	PhanSo(const PhanSo& d);
	

	// dinh nghia cac phuong thuc toan hoc
	PhanSo operator+(PhanSo ps);
	PhanSo operator-(PhanSo ps);
	PhanSo operator*(PhanSo ps);
	PhanSo operator/(PhanSo ps);

	//dinh nghia phuong thuc so sanh
	bool operator==(PhanSo ps);
	bool operator!=(PhanSo ps);

	// dinh nghia phuong thuc nhap xuat su lieu
	friend istream& operator>>(istream& is, PhanSo& ps);
	friend ostream& operator<<(ostream& os, PhanSo ps);

	~PhanSo();
};