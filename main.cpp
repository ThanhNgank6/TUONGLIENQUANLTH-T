#include <iostream>
#include "TuongSatThuong.h"
#include "TuongDauTank.h"

int main() {
    TuongSatThuong t1;
    TuongDauTank t2;

    std::cout << "==============================\n";
    std::cout << "   Nhap thong tin Tuong Sat Thuong\n";
    std::cout << "==============================\n";
    std::cin >> t1;

    std::cout << "\n==============================\n";
    std::cout << "   Nhap thong tin Tuong Dau Tank\n";
    std::cout << "==============================\n";
    std::cin >> t2;

    std::cout << "\n==============================\n";
    std::cout << "   Thong tin Tuong Sat Thuong\n";
    std::cout << "==============================\n";
    std::cout << t1;
    std::cout << "Sat thuong tinh toan: " << t1.tinhToanSatThuong() << "\n";

    std::cout << "\n==============================\n";
    std::cout << "   Thong tin Tuong Dau Tank\n";
    std::cout << "==============================\n";
    std::cout << t2;
    std::cout << "Phong thu tinh toan: " << t2.tinhToanPhongThu() << "\n";

    return 0;
}
