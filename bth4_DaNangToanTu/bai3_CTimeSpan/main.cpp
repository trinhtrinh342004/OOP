#include "CTimeSpan.h"
#include <iostream>

using namespace std;

int main()
{
    CTimeSpan ts1;
    cout << "Nhap thoi gian 1:" << endl;
    cin >> ts1;
    cout << "Thoi gian 1 vua nhap: " << ts1 << endl;

    CTimeSpan ts2;
    cout << "Nhap thoi gian 2:" << endl;
    cin >> ts2;
    cout << "Thoi gian 2 vua nhap: " << ts2 << endl;

    CTimeSpan ts3 = ts1 + ts2;
    cout << "Tong thoi gian: " << ts3 ;

    CTimeSpan ts4 = ts1 - ts2;
    cout << "Hieu thoi gian: " << ts4;

    if (ts1 == ts2)
    {
        cout << "Thoi gian 1 bang thoi gian 2" << endl;
    }
    else if (ts1 != ts2)
    {
        cout << "Thoi gian 1 khac thoi gian 2" << endl;
    }

    if (ts1 > ts2)
    {
        cout << "Thoi gian 1 lon hon thoi gian 2" << endl;
    }
    else if (ts1 >= ts2)
    {
        cout << "Thoi gian 1 lon hon hoac bang thoi gian 2" << endl;
    }

    if (ts1 < ts2)
    {
        cout << "Thoi gian 1 nho hon thoi gian 2" << endl;
    }
    else if (ts1 <= ts2)
    {
        cout << "Thoi gian 1 nho hon hoac bang thoi gian 2" << endl;
    }

    return 0;
}
