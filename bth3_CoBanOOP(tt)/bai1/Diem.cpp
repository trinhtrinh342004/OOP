#include "Diem.h"
void Diem::Nhap()
{
	cout << " Nhap toa do diem (x,y): ";
	cin >> x >> y;
}
void Diem::Xuat()
{
	cout << " la: (" << x << ";" << y << ")" << endl;
}
void Diem::set_x(int xx)
{
	x = xx;
}
void Diem::set_y(int yy)
{
	y = yy;
}
int Diem::get_x()
{
	return x;
}
int Diem::get_y()
{
	return y;
}
void Diem::TinhTien(int dx, int dy)
{
	x = x + dx;
	y = y + dy;
}