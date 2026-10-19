#ifndef NHANVAT_H
#define NHANVAT_H
#include <memory>
#include <string>
#include <vector>
#include "VuKhi.h"
class NhanVat {
private:
    std::string ten;
    int mau, mauToiDa;
    std::vector<std::unique_ptr<VuKhi>> danhSachVuKhi;
public:
    //Constructor
    NhanVat();
    NhanVat(const std::string& ten,int mau);

    //Getter, setter
    std::string getTen() const;
    int getMau() const;
    int getMauToiDa() const;
    void setTen(const std::string& ten);
    void setMau(int mau);

    //Ham xu ly
    void themVuKhi(std::unique_ptr<VuKhi> vk);
    VuKhi* getVuKhi(int i);
    int soVuKhi() const;
    void nhanSatThuong(int satThuong);
    void hoiMau();
    void hienThiTrangThai() const;
};
#endif
