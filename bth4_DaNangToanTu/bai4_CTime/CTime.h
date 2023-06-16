#pragma once
#include <iostream>
using namespace std;

class CTime
{
private:
	int iGio;
	int iPhut;
	int iGiay;
public:
	CTime();
	CTime(int h, int p, int s);
	CTime(const CTime& d);
	~CTime();
	friend istream& operator>>(istream& is, CTime& ct);
	friend ostream& operator<<(ostream& os,const CTime& ct);

	CTime operator+(const CTime& ct);
	CTime operator-(const CTime& ct);
	CTime operator++();
	CTime operator--();
};