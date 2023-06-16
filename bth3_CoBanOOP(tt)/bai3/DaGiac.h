#ifndef _DAGIAC_H_
#define _DAGIAC_H_
#include "Diem.h"

class DaGiac {
private:
    int n;
    Diem* d;

public:
    DaGiac();
    DaGiac(int);
    DaGiac(const DaGiac&);
    ~DaGiac();
    void Nhap();
    void Xuat() const;
    void TinhTien(float, float);
    void Quay(Diem, float);
    void PhongTo(float);
    void ThuNho(float);
};

#endif