class DT1
{
private:
	float a;
	float b;
public:
	DT1();
	DT1(float x, float y);
	DT1(const DT1& dt);

	int F(DT1 dt, float t);
	int F1(DT1 dt);
	DT1 operator+(const DT1& dt);
};

DT1::DT1()
{
	a = 1;
	b = 0;
}

DT1::DT1(float x, float y)
{
	a = x;
	b = y;
}

DT1::DT1(const DT1& dt)
{
	a = dt.a;
	b = dt.b;
}

int DT1::F(DT1 dt, float x)
{
	return a * x + b;
}

int DT1::F1(DT1 dt)
{
	if (b == 0)
		return 0;
	else
		return -b / a;
}

DT1 DT1::operator+(const DT1& dt)
{
	DT1 temp;
	temp.a = this->a + dt.a;
	temp.b = this->b + dt.b;
	return temp;
}