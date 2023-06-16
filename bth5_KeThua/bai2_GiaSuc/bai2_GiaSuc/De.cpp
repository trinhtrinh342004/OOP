#include "De.h"

void De::Keu()
{
	std::cout << "De ";
}

int De::SinhCon()
{
	srand((unsigned)time(0));
	int iSoCon = rand();
	return iSoCon;
}

int De::ChoSua()
{
	srand((unsigned)time(0));
	int iLuongSua = rand() % 10;
	return iLuongSua;
}