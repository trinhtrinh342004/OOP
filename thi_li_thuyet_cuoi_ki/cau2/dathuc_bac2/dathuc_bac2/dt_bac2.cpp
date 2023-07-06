#include <iostream>
using namespace std;

class DT2
{
private:
	float a, b, c;
public:
	DT2();
	DT2(float x, float y, float z);
	DT2(const DT2& dt);
	~DT2();

	float F(DT2 dt, float x);
	DT2 operator+(const DT2& dt);
};

DT2::DT2()
{
	a = 1;
	b = c = 0;
}

DT2::DT2(float x, float y, float z)
{
	a = x;
	b = y;
	c = z;
}

DT2::DT2(const DT2& dt)
{
	this->a = dt.a;
	this->b = dt.b;
	this->c = dt.c;
}
DT2::~DT2(){}

float DT2::F(DT2 dt, float x)
{
	return a * x * x + b * x + c;
}

DT2 DT2::operator+(const DT2& dt)
{
	DT2 temp;
	temp.a = this->a + dt.a;
	temp.b = this->b + dt.b;
	temp.c = this->c + dt.c;
	return temp;
}
