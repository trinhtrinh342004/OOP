#include "CString.h"

int main() {
    string input1, input2;

    cout << "Nhap chuoi 1: ";
    getline(cin, input1);

    cout << "Nhap chuoi 2: ";
    getline(cin, input2);

    // Chuyển chuỗi thành CString
    CString str1(input1.c_str());
    CString str2(input2.c_str());
    CString str3;

    str3 = str1 + str2;
    cout << "Ket qua noi 2 chuoi: " << str3.GetCString() << endl;

    if (str1 == str2) {
        cout << "Hai chuoi bang nhau" << endl;
    }
    else {
        cout << "Hai chuoi khac nhau" << endl;
    }

    if (str1 < str2) {
        cout << "Chuoi str1 nho hon str2" << endl;
    }
    else if (str1 > str2) {
        cout << "Chuoi str1 lon hon str2" << endl;
    }
    else {
        cout << "Hai chuoi bang nhau" << endl;
    }

    return 0;
}