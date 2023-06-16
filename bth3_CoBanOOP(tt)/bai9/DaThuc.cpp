#include "Dathuc.h"

Dathuc::Dathuc()
{
    a = 0;
    b = 0;
}

Dathuc::~Dathuc()
{
}

void Dathuc::Nhap()
{
    cout << "Nhap he so a: ";
    cin >> a;
    cout << "Nhap he so b: ";
    cin >> b;
}

void Dathuc::Xuat()
{
    cout << a << "x + " << b << endl;
}

Dathuc Dathuc::Cong(Dathuc dt)
{
    Dathuc kq;
    kq.a = this->a + dt.a;
    kq.b = this->b + dt.b;
    return kq;
}

Dathuc Dathuc::Tru(Dathuc dt)
{
    Dathuc kq;
    kq.a = this->a - dt.a;
    kq.b = this->b - dt.b;
    return kq;
}

Dathuc Dathuc::Nhan(Dathuc dt)
{
    Dathuc kq;
    kq.a = this->a * dt.a;
    kq.b = this->a * dt.b + this->b * dt.a;
    return kq;
}

Dathuc Dathuc::Chia(Dathuc dt)
{
    Dathuc kq;
    kq.a = this->a / dt.a;
    kq.b = (this->b * dt.a - this->a * dt.b) / (dt.a * dt.a);
    return kq;
}

Dathuc Dathuc::DaoHam()
{
    Dathuc kq;
    kq.a = this->a;
    kq.b = 0;
    return kq;
}

Dathuc Dathuc::NguyenHam()
{
    Dathuc kq;
    kq.a = this->a / 2;
    kq.b = this->b / 2;
    return kq;
}