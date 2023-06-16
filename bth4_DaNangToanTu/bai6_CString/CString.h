#pragma once
#include <iostream>
#include<string>
using namespace std;

class CString {
private:
    char* str;

public:
    CString();
    CString(const char* cstr);
    ~CString();
    int len() const;
    const char* GetCString() const;
    CString operator+(const CString& other) const;
    CString& operator=(const CString& other);
    bool operator==(const CString& other) const;
    bool operator!=(const CString& other) const;
    bool operator<(const CString& other) const;
    bool operator>(const CString& other) const;
};


