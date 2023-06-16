#pragma once
#include <iostream>

using namespace std;

class DaThuc
{
private:
	int a[20];
	int n;
public:
	DaThuc();
	~DaThuc();

	friend istream& operator>>(istream& is, DaThuc& dt);
	friend ostream& operator<<(ostream& os, DaThuc& dt);

	DaThuc operator+( DaThuc& dt);
	DaThuc operator-( DaThuc& dt);
};

