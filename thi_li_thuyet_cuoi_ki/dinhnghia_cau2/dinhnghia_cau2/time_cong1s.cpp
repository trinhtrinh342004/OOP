#include <iostream>
using namespace std;

class Time
{
private:
	int gio;
	int phut;
	int giay;
public:
	Time();
	Time(int h, int p, int s);
	~Time();

	friend istream& operator>>(istream& is, Time& time);
	friend ostream& operator<<(ostream& os, const Time& time);

	int GetTong();
	Time operator+(int x);
	Time operator++();
	Time operator++(int x);
};

Time::Time()
{
	gio = phut = giay = 0;
}

Time::Time(int h, int p, int s)
{
	gio = h;
	phut = p;
	giay = s;
}

Time::~Time() {}

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
	os << time.gio << ":" << time.phut << ":" << time.giay << endl;
	return os;
}

int Time::GetTong()
{
	return this->giay + this->phut * 60 + this->gio * 60 * 60;
}

Time Time::operator+(int x)
{
	Time time;
	time.gio = (this->GetTong() + x) / 3600;
	time.phut = ((this->GetTong() + x - time.gio * 3600) / 60) % 60;
	time.giay = (this->GetTong() + x) % 60;
	return time;
}

Time Time::operator++()
{
	return *this + 1;
}

Time Time::operator++(int x)
{
	Time temp;
	temp = *this;
	*this + 1;
	return temp;
}