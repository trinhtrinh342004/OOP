#include "NhanVien.h"

NhanVien::NhanVien(string manv, string hoten, int t, int dt, string e) : maNV(manv), hoTen(hoten), tuoi(t), sdt(dt), email(e){}
string NhanVien::getMaNV() { return maNV; }
string NhanVien::getHoTen() { return hoTen; }
int NhanVien::getTuoi() { return tuoi; }
int NhanVien::getSDT() { return tuoi; }
string NhanVien::getEmail() { return email; }

void NhanVien::setHoTen(string h) { hoTen = h; }
void NhanVien::setTuoi(int t) { tuoi = t; };
void NhanVien::setSDT(int s) { sdt = s; }
void NhanVien::setEmail(string e) { email = e; }

int NhanVien::getSoSP() { return -1; }
double NhanVien::getThoiGianThua() { return -1; }
void NhanVien::setSoSP(int) { return; }
void NhanVien::setThoiGianThua(double) { return; }

void NhanVien::Nhap()
{
	cin.ignore();
	cout << "Nhap MSNV: ";
	getline(cin, maNV);
	cout << "Nhap ho va ten: ";
	getline(cin, hoTen);
	cout << "Nhap tuoi: ";
	cin >> tuoi;
	cout << "Nhap sdt: ";
	cin >> sdt;
	cin.ignore();
	cout << "Nhap email: ";
	getline(cin, email);
}

void NhanVien::Xuat()
{
	cout << "\nMSNV: " << maNV << "\nHo va ten: " << hoTen << "\nTuoi: " << tuoi << "\nSDT: " << sdt << "\nEmail: " << email;
}

