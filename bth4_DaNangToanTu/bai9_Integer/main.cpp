#include "Integer.h"
int main()
{
	INTEGER m;
	cout << " nhap gia tri m ";
	cin >> m;
	cout << "Xuat m : " << m << endl;
	INTEGER n;
	++m;
	n = m;
	cout << " Xuat n: " << n << endl;
	INTEGER k;
	k = m + n;
	cout << "Xuat k: " << k << endl;
	system("pause");
	return 0;
}