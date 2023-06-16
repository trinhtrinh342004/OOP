#pragma once
#include <iostream>

using namespace std;

class CVector
{
private:
    int* a;
    int chieu;

public:
    CVector();
    ~CVector();

    friend istream& operator>>(istream& is, CVector& vt);
    friend ostream& operator<<(ostream& os, const CVector& vt);
};
