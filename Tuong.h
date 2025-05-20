#ifndef TUONG_H
#define TUONG_H

#include <iostream>
#include <string>
using namespace std;

class Tuong {
protected:
    string ten, viTri, he;
    int giaTien;
    float mau, satThuong, tocDanh, tocChay;

public:
    Tuong();
    virtual ~Tuong() {}
    virtual void nhap(istream &in);
    virtual void xuat(ostream &out) const;
    friend istream& operator>>(istream &in, Tuong &t);
    friend ostream& operator<<(ostream &out, const Tuong &t);
};

#endif
