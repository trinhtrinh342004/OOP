#include <iostream>
using namespace std;
#include "MYINT.h"
int main()
{
	MYINT h(3);
	MYINT m(4);
	MYINT k;
	k = m + h;
	cout << " so k la " << k << endl;
	system("pause");
	return 0;
}