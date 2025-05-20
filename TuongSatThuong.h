#ifndef TUONGSATTHUONG_H
#define TUONGSATTHUONG_H

#include "Tuong.h"

class TuongSatThuong : public Tuong {
private:
    float tyLeBaoDanh, satThuongChiMang;
    string kyNangDacBiet;

public:
    TuongSatThuong();
    void nhap(istream &in) override;
    void xuat(ostream &out) const override;
    float tinhToanSatThuong() const;
};

#endif
