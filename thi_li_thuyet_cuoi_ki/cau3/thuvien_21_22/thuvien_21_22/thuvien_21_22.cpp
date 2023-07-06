#include <iostream>
#include <string>
using namespace std;

class Sach
{
protected:
	string ma;
	string ten;
	string nxb;
	int sl = 0;
	double dongia=0;
public:
	string GetNXB();
	virtual void Nhap();
	virtual void Xuat();
	virtual double ThanhTien() = 0;
};

class SGK : public Sach
{
private:
	int tt=0;
public:
	int getTT();
	void Nhap();
	void Xuat();
	double ThanhTien();
};

class STK : public Sach
{
private:
	double tienthue=0;
public:
	void Nhap();
	void Xuat();
	double ThanhTien();
};

class ThuVien
{
private: 
	int n;
	Sach* s[100];
public: 
	void Nhap();
	void Xuat();
	double TienTungSach();
	void HienThiLoaiSachMin();
	void TimSachTheoNXB(string);
};
string Sach::GetNXB() { return nxb; }
void Sach::Nhap()
{
	cout << "Nhap ma sach: ";
	cin.ignore();
	getline(cin, ma);
	cout << "Nhap ten sach: ";
	getline(cin, ten);
	cout << "Nhap nxb: ";
	getline(cin, nxb);
	cout << "Nhap so luong sach: ";
	cin >> sl;
	cout << "Nhap don gia: ";
	cin >> dongia;
}

void Sach::Xuat()
{
	cout << "Ma sach: " << ma << endl;
	cout << "Ten sach: " << ten << endl;
	cout << "NXB: " << nxb << endl;
	cout << "SL: " << sl << endl;
	cout << "Don gia: " << dongia << endl;
}

void SGK::Nhap()
{
	Sach::Nhap();
	cout << "Tinh trang (0. cu, 1.moi): ";
	cin >> tt;
	if (tt != 0 && tt != 1)
	{
		cout << "Nhap lai: ";
		cin >> tt;
	}
}

void SGK::Xuat()
{
	Sach::Xuat();
	if (tt = 0)
		cout << "Sach cu" << endl;
	else
		cout << "Sach moi" << endl;
}

int SGK::getTT() { return tt; }
double SGK::ThanhTien()
{
	if (tt == 0)
		return (double)sl * dongia * (50 / 100);
	else
		return (double)sl * dongia;
}

void STK::Nhap()
{
	Sach::Nhap();
	cout << "Nhap tien thue: ";
	cin >> tienthue;
}

void STK::Xuat()
{
	Sach::Xuat();
	cout << "Tien thue: " << tienthue << endl;
}

double STK::ThanhTien()
{
	return (double)sl * dongia + tienthue;
}

void ThuVien::Nhap()
{
	cout << "Nhap danh sach: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap sach thu " << i + 1 << ": ";
		cout << "Nhap loai sach (0.SGK , 1.STK): ";
		int loai; cin >> loai;
		if (loai == 0)
			s[i] = new SGK();
		else
			s[i] = new STK();
		s[i]->Nhap();
	}
}

void ThuVien::Xuat()
{
	cout << "Thong tin sach:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "San pham thu " << i + 1 << endl;
		s[i]->Xuat();
	}
}

double ThuVien::TienTungSach()
{
	double t = 0;
	for (int i = 0; i < n; i++)
		t += s[i]->ThanhTien();
	return t;
}

void ThuVien::HienThiLoaiSachMin()
{
	double min = s[0]->ThanhTien();
	int min_i = 0;

	for (int i = 1; i < n; i++)
	{
		double tien = s[i]->ThanhTien();
		if (tien < min)
		{
			min = tien;
			min_i = i;
		}
	}

	cout << "Sach co thanh tien nho nhat: ";
	s[min_i]->Xuat();
}

void ThuVien::TimSachTheoNXB(string b)
{
	cout << "Cac sach thuoc nha xuat ban " << b << ":" << endl;
	for (int i = 0; i < n; i++)
	{
		if (s[i]->GetNXB() == b)
		{
			s[i]->Xuat();
		}
	}
}

int main()
{
	ThuVien tv; string abc;
	tv.Nhap();
	tv.Xuat();
	cout << "Thanh Tien " << tv.TienTungSach();
	tv.HienThiLoaiSachMin();
	tv.TimSachTheoNXB(abc);
	return 0;
}

