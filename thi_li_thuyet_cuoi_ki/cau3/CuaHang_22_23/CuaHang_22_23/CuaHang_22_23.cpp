#include <iostream>
#include <string>
#include <map>
using namespace std;

class KhachHang
{
private:
	int maKH;
	string tenKH;
	string sdt;
public:
	void Nhap();
	void Xuat();
	int getMaKH();
};

class Ngay
{
private:
	int ngay;
	int thang;
	int nam;
public:
	void Nhap();
	void Xuat();
};

class SanPham
{
protected:
	long gia;
	string maSP;
	string tieude;
public:
	virtual void Nhap();
	virtual void Xuat();
	long getGia();
};

class Tranh : public SanPham
{
protected:
	int cao;
	int rong;
	string hoasi;
public:
	void Nhap();
	void Xuat();};class CD : public SanPham{protected:	string caSi;	string donvi;public:	void Nhap();	void Xuat();};class HoaDon{protected:	string maHD;	KhachHang kh;	Ngay ngayCap;	int n;	SanPham* hd[100];	long tongGia;public:	void Nhap();	void Xuat();	long getTongGia();	KhachHang getKH();};class CuaHang{protected:	int size;	HoaDon ch[100];public:	void Nhap();	void Xuat();	long TongThuNhap();	void TimKiemKHMAx();};void KhachHang::Nhap(){	cout << "Nhap ma kh: ";	cin >> maKH;	cout << "Nhap ten kn: ";	cin.ignore();	getline(cin, tenKH);	cout << "Nhap sdt: ";	getline(cin, sdt);}void KhachHang::Xuat(){	cout << "Ma KH: " << maKH << endl;	cout << "Ten KH: " << tenKH << endl;	cout << "SDT: " << sdt << endl;}int KhachHang::getMaKH(){	return maKH;}void Ngay::Nhap()
{
	cout << "Nhap ngay thang nam: ";
	cin >> ngay >> thang >> nam;
}

void Ngay::Xuat()
{
	cout << "Ngay " << ngay << " Thang " << thang << " Nam " << nam << endl;
}

void SanPham::Nhap()
{
	cin.ignore();
	cout << "Nhap ma sp: ";
	getline(cin, maSP);
	cout << "Nhap tieu de: ";
	getline(cin, tieude);
	cout << "Nhap gia: ";
	cin >> gia;
}

void SanPham::Xuat()
{
	cout << "Ma sp: " << maSP << endl;
	cout << "Tieu de: " << tieude << endl;
	cout << "Gia: " << gia << endl;
}

long SanPham::getGia()
{
	return gia;
}

void Tranh::Nhap()
{
	SanPham::Nhap();
	cout << "Nhap chieu cao: ";
	cin >> cao;
	cout << "Nhap chieu rong: ";
	cin >> rong;
	cout << "Nhap ten hoa si: ";
	cin.ignore();
	getline(cin, hoasi);
}

void Tranh::Xuat()
{
	SanPham::Xuat();
	cout << "Chieu rong va chieu cao: " << rong << " " << cao << endl;
	cout << "Ten hoa si: " << hoasi << endl;
}

void CD::Nhap()
{
	SanPham::Nhap();
	cout << "Nhap ca si: ";
	cin.ignore();
	getline(cin, caSi);
	cout << "Nhap don vi: ";
	getline(cin, donvi);
}

void CD::Xuat()
{
	SanPham::Xuat();
	cout << "Ca si: "<< caSi << endl;
	cout << "Don vo: " << donvi << endl;
}

void HoaDon::Nhap()
{
	cout << "Nhap ma hoa don: ";
	cin >> maHD;
	cout << "Nhap thong tin khach hang: " << endl;
	kh.Nhap();
	cout << "Nhap ngay cap: " << endl;
	ngayCap.Nhap();
	cout << "Nhap so luong san pham: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap san pham thu " << i + 1 << endl;
		int loai;
		cout << "Nhap loai (0.Tranh 1.CD): ";
		cin >> loai;
		if (loai == 0)
			hd[i] = new Tranh();
		else
			hd[i] = new CD();
		hd[i]->Nhap();
	}
}

void HoaDon::Xuat()
{
	cout << "Ma hoa don: " << maHD << endl;
	cout << "Ngay cap: " << endl;
	ngayCap.Xuat();
	cout << "Thong tin kh: " << endl;
	cout << "Tong gia tien: " << getTongGia()<<endl;
	kh.Xuat();
	for (int i = 0; i < n; i++)
	{
		cout << "San pham thu " << i + 1 << endl;
		hd[i]->Xuat();
	}
}

long HoaDon::getTongGia()
{
	tongGia = 0;
	for (int i = 0; i < n; i++)
	{
		tongGia += hd[i]->getGia();
	}
	return tongGia;
}

KhachHang HoaDon::getKH()
{
	return kh;
}

void CuaHang::Nhap()
{
	cout << "Nhap so luong hoa don: ";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cout << "Nhap hoa don thu " << i + 1 << endl;
		ch[i].Nhap();
	}
}

void CuaHang::Xuat()
{
	for (int i = 0; i < size; i++)
	{
		cout << "Hoa don thu " << i + 1 << endl;
		ch[i].Xuat();
	}
}

long CuaHang::TongThuNhap()
{
	int s = 0;
	for (int i = 0; i < size; i++)
	{
		s += ch[i].getTongGia();
	}
	return s;
}
void CuaHang::TimKiemKHMAx()
{
	map<int, long> mp;
	for (int i = 0; i < size; ++i)
	{
		int id = ch[i].getKH().getMaKH();
		mp[id] += ch[i].getTongGia();
	}
	long max = 0;
	for (const auto& pair : mp)
	{
		if (pair.second > max)
		{
			max = pair.second;
		}
	}

	cout << "ID cua khach mua nhieu nhat: \n";
	for (const auto& pair : mp)
	{
		if (pair.second == max)
		{
			cout << pair.first << endl;
		}
	}
}

int main()
{
	CuaHang l;
	l.Nhap();
	l.Xuat();
	cout << "Tong thu nhap: " << l.TongThuNhap() << endl;
	l.TimKiemKHMAx();
	return 0;
}