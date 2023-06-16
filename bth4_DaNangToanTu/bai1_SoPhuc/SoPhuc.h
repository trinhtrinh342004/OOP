#pragma once
#include <iostream>
using namespace std;

class SoPhuc
{
private:
	float fThuc;
	float fAo;
public:
	SoPhuc();
	SoPhuc(float x, float y);
	SoPhuc(const SoPhuc& d);

	SoPhuc operator+(SoPhuc sp);
	SoPhuc operator-(SoPhuc sp);
	SoPhuc operator*(SoPhuc sp);
	SoPhuc operator/(SoPhuc sp);
	bool operator==(SoPhuc sp);
	bool operator!=(SoPhuc sp);
	friend istream& operator>>(istream& is, SoPhuc& sp);
	friend ostream& operator<<(ostream& os, SoPhuc sp);
	
	~SoPhuc();
};