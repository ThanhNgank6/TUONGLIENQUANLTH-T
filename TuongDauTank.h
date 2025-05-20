#ifndef TUONGDAUTANK_H
#define TUONGDAUTANK_H

#include "Tuong.h"

class TuongDauTank : public Tuong {
private:
    float giap, khangPhep, hoiMau;
    string kyNangDacBiet;

public:
    TuongDauTank();
    void nhap(istream &in) override;
    void xuat(ostream &out) const override;
    float tinhToanPhongThu() const;
};

#endif
