#ifndef PHEPTHUAT_H
#define PHEPTHUAT_H
#include "VuKhi.h"
class PhepThuat : public VuKhi {
private:
    std::string loaiPhep;
    int manaTieuThuMoiGiay;
    int manaHienTai;
public:
    PhepThuat();
    PhepThuat(const std::string& ten,int satThuong,double tocDo,const std::string& loai,int mana);
    std::string getLoaiPhep() const;
    int getManaTieuThuMoiGiay() const;
    int getManaHienTai() const;
    void setLoaiPhep(const std::string& loai);
    void setManaTieuThuMoiGiay(int mana);
    void TanCong() override;
    int SatThuong(int t) const override;
    std::string getLoai() const override;
    void xuat(std::ostream& os) const override;
    void nhap(std::istream& is) override;
    bool DuMana(int t) const;
    void SuDungMana(int t);
    void HoiMana();
};
#endif
