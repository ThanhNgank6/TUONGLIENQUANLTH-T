#include "TuongSatThuong.h"

TuongSatThuong::TuongSatThuong() : tyLeBaoDanh(0), satThuongChiMang(0), kyNangDacBiet("") {}

void TuongSatThuong::nhap(istream &in) {
    Tuong::nhap(in);
    cout << "Ty le bao danh (%): "; in >> tyLeBaoDanh;
    cout << "Sat thuong chi mang: "; in >> satThuongChiMang;
    in.ignore();
    cout << "Ky nang dac biet: "; getline(in, kyNangDacBiet);
}

void TuongSatThuong::xuat(ostream &out) const {
    Tuong::xuat(out);
    out << "Ty le bao danh: " << tyLeBaoDanh << "%\n"
        << "Sat thuong chi mang: " << satThuongChiMang << "\n"
        << "Ky nang dac biet: " << kyNangDacBiet << "\n";
}

float TuongSatThuong::tinhToanSatThuong() const {
    return satThuong + (satThuong * tyLeBaoDanh / 100 * satThuongChiMang);
}
