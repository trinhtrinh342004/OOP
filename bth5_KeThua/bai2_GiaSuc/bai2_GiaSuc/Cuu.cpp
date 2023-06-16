#include "Cuu.h"

void Cuu::Keu()
{
	std::cout << "Cuu ";
}

int Cuu::SinhCon()
{
	srand((unsigned)time(0));
	int iSoCon = rand();
	return iSoCon;
}

int Cuu::ChoSua()
{
	srand((unsigned)time(0));
	int iLuongSua = rand() % 5;
	return iLuongSua;
}