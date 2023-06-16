#include "CTime.h"

int main()
{
    CTime time1(12, 30, 45);
    CTime time2(3, 15, 20);

    cout << "Thoi gian 1: " << time1 << endl;
    cout << "Thoi gian 2: " << time2 << endl;

    // Nhập giá trị thời gian
    cout << "Nhap thoi gian 1 (hh:mm:ss): ";
    cin >> time1;
    cout << "Nhap thoi gian 2 (hh:mm:ss): ";
    cin >> time2;

    cout << "Thoi gian 1 da cap nhat: " << time1 << endl;
    cout << "Thoi gian 2 da cap nhat: " << time2 << endl;

    // Phép cộng
    CTime sum = time1 + time2;
    cout << "Tong thoi gian 1 va thoi gian 2: " << sum << endl;

    // Phép trừ
    CTime diff = time1 - time2;
    cout << "Hieu giua thoi gian 1 va thoi gian 2: " << diff << endl;

    // Tăng và giảm thời gian
    cout << "Thoi gian 1 truoc khi tang: " << time1 << endl;
    ++time1;
    cout << "Thoi gian 1 sau khi tang: " << time1 << endl;

    cout << "Thoi gian 2 truoc khi giam: " << time2 << endl;
    --time2;
    cout << "Thoi gian 2 sau khi giam: " << time2 << endl;

    return 0;
}
