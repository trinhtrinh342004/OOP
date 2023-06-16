#include "DongHo.h"
#include <iostream>
using namespace std;

DongHo::DongHo() {
    gio = phut = giay = 0;
    buoi = 'S'; // mặc định là buổi sáng
}

DongHo::DongHo(int h, int m, int s) {
    gio = h;
    phut = m;
    giay = s;
    buoi = 'S'; // mặc định là buổi sáng
    if (gio >= 12) {
        buoi = 'C'; // nếu gio >= 12 thì là buổi chiều/tối
    }
    if (gio > 12) {
        gio -= 12; // chuyển sang định dạng 12 giờ
    }
}

DongHo::DongHo(int n) {
    gio = phut = giay = 0;
    buoi = 'S'; // mặc định là buổi sáng
    for (int i = 0; i < n; i++) {
        int h, m, s;
        cout << "Nhap thoi gian " << i + 1 << ":\n";
        cout << "Nhap gio: ";
        cin >> h;
        cout << "Nhap phut: ";
        cin >> m;
        cout << "Nhap giay: ";
        cin >> s;
        gio += h;
        phut += m;
        giay += s;
    }
    if (giay >= 60) {
        phut += giay / 60;
        giay %= 60;
    }
    if (phut >= 60) {
        gio += phut / 60;
        phut %= 60;
    }
    if (gio >= 24)
        gio %= 24;
    if (gio >= 12) {
        buoi = 'C'; // nếu gio >= 12 thì là buổi chiều/tối
    }
    if (gio > 12) {
        gio -= 12; // chuyển sang định dạng 12 giờ
    }
}

void DongHo::Nhap() {
    cout << "Nhap gio: ";
    cin >> gio;
    cout << "Nhap phut: ";
    cin >> phut;
    cout << "Nhap giay: ";
    cin >> giay;
    if (gio >= 12) {
        buoi = 'C'; // nếu gio >= 12 thì là buổi chiều/tối
    }
    if (gio > 12) {
        gio -= 12; // chuyển sang định dạng 12 giờ
    }
}

void DongHo::Xuat() const {
    if (gio == 0) {
        cout << "12";
    }
    else {
        cout << gio;
    }
    cout << ":" << phut << ":" << giay << " ";
    if (buoi == 'S') {
        cout << "AM";
    }
    else {
        cout << "PM";
    }
}

void DongHo::Tang1s() {
    giay++;
    if (giay == 60) {
        giay = 0;
        phut++;
        if (phut == 60) {
            phut = 0;
            gio++;
            if (gio == 24) {
                gio = 0;
            }
            if (gio >= 12) {
                buoi = 'C'; // nếu gio >= 12 thì là buổi chiều/tối
            }
            if (gio > 12) {
                gio -= 12; // chuyển sang định dạng 12 giờ
            }
        }
    }
}

DongHo DongHo::Cong(DongHo dh) const {
    DongHo kq;
    kq.giay = giay + dh.giay;
    kq.phut = phut + dh.phut;
    kq.gio = gio + dh.gio;
    if (kq.giay >= 60) {
        kq.phut += kq.giay / 60;
        kq.giay %= 60;
    }
    if (kq.phut >= 60) {
        kq.gio += kq.phut / 60;
        kq.phut %= 60;
    }
    if (kq.gio >= 24) {
        kq.gio %= 24;
    }
    if (kq.gio >= 12) {
        kq.buoi = 'C'; // nếu gio >= 12 thì là buổi chiều/tối
    }
    if (kq.gio > 12) {
        kq.gio -= 12; // chuyển sang định dạng 12 giờ
    }
    return kq;
}

DongHo DongHo::Tru(DongHo dh) const {
    DongHo kq;
    kq.giay = giay - dh.giay;
    kq.phut = phut - dh.phut;
    kq.gio = gio - dh.gio;
    if (kq.giay < 0) {
        kq.giay += 60;
        kq.phut--;
    }
    if (kq.phut < 0) {
        kq.phut += 60;
        kq.gio--;
    }
    if (kq.gio < 0) {
        kq.gio += 24;
    }
    if (kq.gio >= 12) {
        kq.buoi = 'C'; // nếu gio >= 12 thì là buổi chiều/tối
    }
    if (kq.gio > 12) {
        kq.gio -= 12; // chuyển sang định dạng 12 giờ
    }
    return kq;
}