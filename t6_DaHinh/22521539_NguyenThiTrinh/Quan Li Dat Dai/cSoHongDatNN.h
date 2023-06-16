#pragma once
#include "cSoHong.h"
#include <iostream>

using namespace std;

class cSoHongDatNN : public cSoHong
{
private:
	int iThoiHan;
public:
	void Nhap();
	void Xuat();
	int getLoai();
	int getThoiHan();
};