#include "DaThuc.h"
using namespace std;

int main()
{
	DaThuc dt1, dt2;

	cout << "Nhap vao da thuc 1: " << endl;
	cin >> dt1;

	cout << "Nhap vao da thuc 2: " << endl;
	cin >> dt2;

	DaThuc dtTong = dt1 + dt2;
	DaThuc dtHieu = dt1 - dt2;

	cout << "Tong hai da thuc la: " << dtTong << endl;
	cout << "Hieu hai da thuc la: " << dtHieu << endl;
 }