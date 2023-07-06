#include <iostream>
using namespace std;

class Time
{
private:
	int gio, phut, giay;
public:
	Time();
	Time(int x, int y, int z);
	Time(const Time& time);
	~Time();

	friend istream& operator>>(istream& is, Time& time);
	friend ostream& operator<<(ostream& os, const Time& time);

	int GetTong();
	Time operator-(int x);
	Time operator--();
	Time operator--(int x);
};

Time::Time() { gio = phut = giay = 0; }
Time::Time(int x, int y, int z)
{
	gio = x;
	phut = y;
	giay = z;
}
Time::Time(const Time& time)
{
	gio = time.gio;
	phut = time.phut;
	giay = time.giay;
}
Time::~Time(){}

istream& operator>>(istream& is, Time& time)
{
	cout << "Nhap gio: ";
	is >> time.gio;
	cout << "Nhap phut: ";
	is >> time.phut;
	cout << "Nhap giay: ";
	is >> time.giay;
	return is;
}

ostream& operator<<(ostream& os, const Time& time)
{
	os << time.gio << ":" << time.phut << ":" << time.giay;
	return os;
}

int Time::GetTong()
{
	return giay + phut * 60 + gio * 3600;
}

Time Time::operator-(int x)
{
	Time temp;
	if (this->GetTong() - x < 0)
	{
		cout << "Loi!";
		return temp;
	}
	else
	{
		temp.gio = (this->GetTong() - x) / 3600;
		temp.phut = ((this->GetTong() - x - temp.gio * 3600) / 60) % 60;
		temp.giay = (this->GetTong()) % 60;
		return temp;
	}
}

Time Time::operator--()
{
	return *this - 1;
}

Time Time::operator--(int x)
{
	Time temp;
	temp = *this;
	*this - 1;
	return temp;
}

int main()
{
	return 0;
}