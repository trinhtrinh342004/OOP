#pragma once
#include <iostream>
using namespace std;
class MYINT
{
private:
	int n;
public:
	MYINT();
	MYINT(int m);
	~MYINT();
	friend istream& operator>>(istream& is, MYINT& h);
	friend ostream& operator<<(ostream& os, MYINT& h);
	MYINT operator+(MYINT& j);

};


