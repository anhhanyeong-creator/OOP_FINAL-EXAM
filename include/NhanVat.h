#ifndef NHANVAT_H
#define NHANVAT_H
#include <memory>
#include <string>
#include <vector>
#include <algorithm>

#include "VuKhi.h"
class NhanVat {
    private:
        std::string tenNhanVat_;
        int mau_, mauToiDa_;
        std::vector<std::unique_ptr<VuKhi>> danhSachVuKhi_;
        
    public:
        //Constructor
        NhanVat();
        NhanVat(const std::string& tenNhanVat,int mau);

        //Getter, setter
        std::string getTen() const;
        int getMau() const;
        int getMauToiDa() const;
        void setTen(const std::string& tenNhanVat);
        void setMau(int mau);

        //Ham xu ly
        void themVuKhi(std::unique_ptr<VuKhi> vuKhi);
        VuKhi* getVuKhi(int index);
        int soVuKhi() const;
        void nhanSatThuong(int satThuong);
        void hoiMau();
        void hienThiTrangThai() const;
};
#endif
