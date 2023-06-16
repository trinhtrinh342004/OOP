#include "Bo.h"

void Bo::Keu()
{
	std::cout << "Bo ";
}

int Bo::SinhCon()
{
	srand((unsigned)time(0));  // Khởi tạo bộ phát sinh số ngãu nhiên
	int iSoCon = rand(); // Tạo ngẫu nhiên một số nguyên
	return iSoCon;
}

int Bo::ChoSua()
{
	srand((unsigned)time(0));
	int iLuongSua = rand()% 20;
	return iLuongSua;
}