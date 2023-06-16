#include "GiaSuc.h"
#include "Bo.h"
#include "Cuu.h"
#include "De.h"
#include <iostream>

using namespace std;

int main()
{
	int i, nBo, nCuu, nDe;
	Bo b[10];
	Cuu c[10];
	De d[10];

	cout << "Nhap so con bo: ";
	cin >> nBo;
	cout << "Nhap so con cuu: ";
	cin >> nCuu;
	cout << "Nhap so con de: ";
	cin >> nDe;

	for (i = 0; i < nBo; i++)
		b[i].Keu();
	for (i = 0; i < nCuu; i++)
		c[i].Keu();
	for (i = 0; i < nDe; i++)
		d[i].Keu();

	int iSLBo = 0;
	int iSLCuu = 0;
	int iSLDe = 0;

	for (i = 0; i < nBo; i++)
		iSLBo += b[i].SinhCon();
	for (i = 0; i < nCuu; i++)
		iSLCuu += c[i].SinhCon();
	for (i = 0; i < nDe; i++)
		iSLDe += d[i].SinhCon();

	cout << "\nSo luong bo sinh ra " << iSLBo;
	cout << "\nSo luong cuu sinh ra " << iSLCuu;
	cout << "\nSo luong de sinh ra " << iSLDe;

	return 0;
}