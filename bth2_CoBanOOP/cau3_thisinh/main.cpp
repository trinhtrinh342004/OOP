#include "ThiSinh.h"
#include "MangThiSinh.h"
#include <string.h>

void main()
{
	MangThiSinh x;
	x.NhapDS();
	cout << "DS thi sinh co diem tren 15: ";
	x.XuatThoaDK();
	system("pause");
}