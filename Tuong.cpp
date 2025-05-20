#include "Tuong.h"

Tuong::Tuong() : ten(""), viTri(""), he(""), giaTien(0), mau(0), satThuong(0), tocDanh(0), tocChay(0) {}

void Tuong::nhap(istream &in) {
    cout << "Ten: "; getline(in, ten);
    cout << "Vi tri: "; getline(in, viTri);
    cout << "He: "; getline(in, he);
    cout << "Gia tien: "; in >> giaTien;
    cout << "Mau: "; in >> mau;
    cout << "Sat thuong: "; in >> satThuong;
    cout << "Toc danh: "; in >> tocDanh;
    cout << "Toc chay: "; in >> tocChay;
    in.ignore();
}

void Tuong::xuat(ostream &out) const {
    out << "Ten: " << ten << "\nVi tri: " << viTri << "\nHe: " << he
        << "\nGia tien: " << giaTien << "\nMau: " << mau
        << "\nSat thuong: " << satThuong << "\nToc danh: " << tocDanh
        << "\nToc chay: " << tocChay << "\n";
}

istream& operator>>(istream &in, Tuong &t) {
    t.nhap(in);
    return in;
}

ostream& operator<<(ostream &out, const Tuong &t) {
    t.xuat(out);
    return out;
}
