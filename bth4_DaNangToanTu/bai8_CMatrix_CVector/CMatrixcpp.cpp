#include "CMatrix.h"

CMatrix::CMatrix()
{

}


CMatrix::~CMatrix()
{
}

istream& operator>>(istream& is, CMatrix& vt)
{
	cout << " Nhap phan cac phan tu cua ma tran \n";
	cout << " nhap cap ma tran \n";
	cin >> vt.cap;
	for (int i = 0; i < vt.cap; i++)
	{
		for (int j = 0; j < vt.cap; j++)
		{
			is >> vt.a[i][j];
		}
	}
	return is;
}

ostream& operator<<(ostream& os, CMatrix& vt)
{
	cout << " Xuat Matrix \n";
	cout << endl;
	for (int i = 0; i < vt.cap; i++)
	{
		for (int j = 0; j < vt.cap; j++)
		{
			if (j == vt.cap - 1)
			{
				os << vt.a[i][j] << "\t" << endl;
			}
			else
			{
				os << vt.a[i][j] << "\t";
			}
		}
	}
	return os;
}