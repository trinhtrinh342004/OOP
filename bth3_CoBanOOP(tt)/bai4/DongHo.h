#ifndef _DONGHO_H_
#define _DONGHO_H_

class DongHo {
private:
    int gio;
    int phut;
    int giay;
    char buoi;

public:
    DongHo();
    DongHo(int, int, int);
    DongHo(int);
    void Nhap();
    void Xuat() const;
    void Tang1s();
    DongHo Cong(DongHo) const;
    DongHo Tru(DongHo) const;
};

#endif