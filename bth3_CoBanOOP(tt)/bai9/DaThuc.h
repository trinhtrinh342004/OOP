#ifndef DATHUC_H
#define DATHUC_H

#include <iostream>
using namespace std;

class Dathuc
{
public:
    Dathuc();
    ~Dathuc();
    void Nhap();
    void Xuat();
    Dathuc Cong(Dathuc dt);
    Dathuc Tru(Dathuc dt);
    Dathuc Nhan(Dathuc dt);
    Dathuc Chia(Dathuc dt);
    Dathuc DaoHam();
    Dathuc NguyenHam();

private:
    float a, b;
};

#endif // DATHUC_H