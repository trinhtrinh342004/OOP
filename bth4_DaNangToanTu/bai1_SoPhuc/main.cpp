#include "SoPhuc.h"
#include <iostream>
using namespace std; 

int main()
{
	SoPhuc sp1, sp2, spTong, spHieu, spTich, spThuong;

	cout << "Nhap so phuc 1: \n";
	cin >> sp1;
	cout << "Nhap so phuc 2: \n";
	cin >> sp2;

	spTong = sp1 + sp2;
	spHieu = sp1 - sp2;
	spTich = sp1 * sp2;
	spThuong = sp1 / sp2;

	if (sp1 == sp2)
		cout << " sp1 = sp2" << endl;
	if (sp1 != sp2)
		cout << " sp1 != sp2" << endl;

	cout << "Tong 2 so phuc: " << spTong;
	cout << "Hieu 2 so phuc: " << spHieu;
	cout << "Tich 2 so phuc: " << spTich;
	cout << "Thuong 2 so phuc: " << spThuong;

	return 0;
}