#include "PhanSo.h"
#include <iostream>
using namespace std;

int main()
{
	PhanSo ps1, ps2, psTong, psHieu, psTich, psThuong;

	cout << "Nhap phan so 1: " << endl;
	cin >> ps1;
	cout << "Nhap phan so 2: " << endl;
	cin >> ps2;

	psTong = ps1 + ps2;
	psHieu = ps1 - ps2;
	psTich = ps1 * ps2;
	psThuong = ps1 / ps2;

	if (ps1 == ps2)
		cout << "Hai phan so bang nhau!" << endl;
	else
		cout << "Hai phan so khac nhau! " << endl;

	cout << "Tong hai phan so: " << psTong;
	cout << "Hieu hai phan so: " << psHieu;
	cout << "Tich hai phan so: " << psTich;
	cout << "Thuong hai phan so: " << psThuong;

	return 0;
}