#pragma once
#include <iostream>
using namespace std;
class Diem
{
	int x;
	int y;
public:
	Diem() { x = 0; y = 0; }
	Diem(int xx, int yy) { x = xx; y = yy; }
	~Diem()
	{
		cout << "Huy bo doi tuong ";
	}
	void Nhap();
	void Xuat();
	void set_x(int xx);
	void set_y(int yy);
	int get_x();
	int get_y();
	void TinhTien(int dx, int dy);
};
