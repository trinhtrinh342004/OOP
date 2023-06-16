#pragma once
#include <iostream>
using namespace std;

class CTimeSpan
{
private:
	int iGio;
	int iPhut;
	int iGiay;
public:
	CTimeSpan();
	CTimeSpan(int h, int p, int s);
	CTimeSpan(const CTimeSpan& d);

	CTimeSpan operator+(const CTimeSpan& cts) const;
	CTimeSpan operator-(const CTimeSpan& cts) const;

	bool operator==(const CTimeSpan& cts) const;
	bool operator!=(const CTimeSpan& cts) const;
	bool operator>(const CTimeSpan& cts) const;
	bool operator>=(const CTimeSpan& cts) const;
	bool operator<(const CTimeSpan& cts) const;
	bool operator<=(const CTimeSpan& cts) const;

	friend std::istream& operator>>(std::istream& is, CTimeSpan& cts);
	friend std::ostream& operator<<(std::ostream& os, const CTimeSpan& cts);
	~CTimeSpan();
};