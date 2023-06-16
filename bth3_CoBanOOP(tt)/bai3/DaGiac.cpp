#include "DaGiac.h"
#include <iostream>
#include <math.h>
using namespace std;

DaGiac::DaGiac() {
    n = 0;
    d = NULL;
}

DaGiac::DaGiac(int m) {
    n = m;
    d = new Diem[n];
    for (int i = 0; i < n; i++)
        d[i] = Diem();
}

DaGiac::DaGiac(const DaGiac& dg) {
    n = dg.n;
    d = new Diem[n];
    for (int i = 0; i < n; i++)
        d[i] = dg.d[i];
}

DaGiac::~DaGiac() {
    delete[] d;
}

void DaGiac::Nhap() {
    cout << "Nhap so dinh cua da giac: ";
    cin >> n;
    d = new Diem[n];
    for (int i = 0; i < n; i++) {
        cout << "Nhap toa do diem " << i + 1 << ":\n";
        d[i].Nhap();
    }
}

void DaGiac::Xuat() const {
    for (int i = 0; i < n; i++) {
        cout << "Dinh " << i + 1 << ": ";
        d[i].Xuat();
        cout << endl;
    }
}

void DaGiac::TinhTien(float dx, float dy) {
    for (int i = 0; i < n; i++)
        d[i] = Diem(d[i].get_x() + dx, d[i].get_y() + dy);
}

void DaGiac::Quay(Diem Goc, float rad) {
    for (int i = 0; i < n; i++) {
        float x = Goc.get_x() + (d[i].get_x() - Goc.get_x()) * cos(rad) - (d[i].get_y() - Goc.get_y()) * sin(rad);
        float y = Goc.get_y() + (d[i].get_x() - Goc.get_x()) * sin(rad) + (d[i].get_y() - Goc.get_y()) * cos(rad);
        d[i] = Diem(x, y);
    }
}

void DaGiac::PhongTo(float k) {
    for (int i = 0; i < n; i++)
        d[i] = Diem(d[i].get_x() * k, d[i].get_y() * k);
}

void DaGiac::ThuNho(float k) {
    for (int i = 0; i < n; i++)
        d[i] = Diem(d[i].get_x() / k, d[i].get_y() / k);
}