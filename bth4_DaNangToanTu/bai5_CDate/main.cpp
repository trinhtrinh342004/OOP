#include "CDate.h"
#include <iostream>
using namespace std;

int main()
{
	CDate D;
	cin >> D;
	cout << D;
	CDate D1(D), D2(D), D3(D), D4(D);
	cout << ++D1;
	cout << --D2;
	cout << D3 + 7;
	cout << D4 - 7;
	return 0;
}