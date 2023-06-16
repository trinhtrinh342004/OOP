#ifndef _DIEM_H_
#define _DIEM_H_

class Diem {
private:
    float x;
    float y;

public:
    Diem();
    Diem(float, float);
    float get_x() const;
    float get_y() const;
    void Nhap();
    void Xuat() const;
};

#endif