#include "TuongDauTank.h"

TuongDauTank::TuongDauTank() : giap(0), khangPhep(0), hoiMau(0), kyNangDacBiet("") {}

void TuongDauTank::nhap(istream &in) {
    Tuong::nhap(in);
    cout << "Giap: "; in >> giap;
    cout << "Khang phep: "; in >> khangPhep;
    cout << "Hoi mau: "; in >> hoiMau;
    in.ignore();
    cout << "Ky nang dac biet: "; getline(in, kyNangDacBiet);
}

void TuongDauTank::xuat(ostream &out) const {
    Tuong::xuat(out);
    out << "Giap: " << giap << "\nKhang phep: " << khangPhep
        << "\nHoi mau: " << hoiMau << "\nKy nang dac biet: " << kyNangDacBiet << "\n";
}

float TuongDauTank::tinhToanPhongThu() const {
    return giap + khangPhep + hoiMau;
}
