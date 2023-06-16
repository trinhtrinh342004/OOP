#include "CString.h"

CString::CString() {
    str = new char[1];
    str[0] = '\0';
}

CString::CString(const char* cstr) {
    int len = 0;
    while (cstr[len] != '\0') {
        len++;
    }
    str = new char[len + 1];
    for (int i = 0; i <= len; i++) {
        str[i] = cstr[i];
    }
}

CString::~CString() {
    delete[] str;
}

int CString::len() const {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

const char* CString::GetCString() const {
    return str;
}

CString CString::operator+(const CString& other) const {
    int len1 = len();
    int len2 = other.len();

    char* result = new char[len1 + len2 + 1];

    int index = 0;
    for (int i = 0; i < len1; i++) {
        result[index++] = str[i];
    }
    for (int i = 0; i < len2; i++) {
        result[index++] = other.str[i];
    }
    result[index] = '\0';

    CString newString(result);
    delete[] result;

    return newString;
}

CString& CString::operator=(const CString& other) {
    if (this == &other) {
        return *this;
    }

    delete[] str;

    int len = other.len();
    str = new char[len + 1];

    for (int i = 0; i <= len; i++) {
        str[i] = other.str[i];
    }

    return *this;
}

bool CString::operator==(const CString& other) const {
    int len1 = len();
    int len2 = other.len();

    if (len1 != len2) {
        return false;
    }

    for (int i = 0; i < len1; i++) {
        if (str[i] != other.str[i]) {
            return false;
        }
    }

    return true;
}

bool CString::operator!=(const CString& other) const {
    return !(*this == other);
}

bool CString::operator<(const CString& other) const {
    int len1 = len();
    int len2 = other.len();

    int minlen = (len1 < len2) ? len1 : len2;

    for (int i = 0; i < minlen; i++) {
        if (str[i] < other.str[i]) {
            return true;
        }
        else if (str[i] > other.str[i]) {
            return false;
        }
    }

    return len1 < len2;
}

bool CString::operator>(const CString& other) const {
    return !(*this < other) && (*this != other);
}