#pragma once
#include <iostream>

using namespace std;

class CMatrix
{
private:
	int a[30][30];
	int cap;
public:
	CMatrix();
	~CMatrix();
	
	friend istream& operator>>(istream& is, CMatrix& vt);
	friend ostream& operator<<(ostream& os, CMatrix& vt);
};