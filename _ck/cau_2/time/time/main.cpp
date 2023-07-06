//2018-2019
//HK1
#include <iostream>
using namespace std;

class helloworld
{
public:
	helloworld()
	{
		cout << "Entering the Hello program saying..." << endl;
	}
	~helloworld()
	{
		cout << "Then exiting..." << endl;
	}
};

helloworld hw;


void main()
{
	cout << "Hello, world.\n";
}