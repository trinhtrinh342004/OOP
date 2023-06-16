#pragma once
#include <iostream>
using namespace std;
class INTEGER
{
private:
	int n;
public:
	INTEGER();
	INTEGER(int m);
	~INTEGER();
	friend istream& operator>>(istream& is, INTEGER& l);
	friend ostream& operator<<(ostream& os, INTEGER& l);
	INTEGER operator+(INTEGER& j);
	INTEGER operator*(INTEGER& j);
	void operator++();
};

