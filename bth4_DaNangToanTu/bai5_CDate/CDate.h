#pragma once
#include <iostream>
using namespace std;

class CDate
{
private:
	int iNgay;
	int iThang;
	int iNam;
public:
	CDate();
	CDate(int x, int y, int z);
	CDate(const CDate& d);
	~CDate();

	friend istream& operator>>(istream& is, CDate& cd);
	friend ostream& operator<<(ostream& os,const CDate& cd);

	CDate operator++();
	CDate operator--();
	CDate operator+(int n);
	CDate operator-(int n);
	int MaxDay(int M, int Y);
};