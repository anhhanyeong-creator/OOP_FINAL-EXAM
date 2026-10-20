#ifndef PHEPTHUAT_H
#define PHEPTHUAT_H
#include "VuKhi.h"
class PhepThuat : public VuKhi {
    private:
        std::string loaiPhep;
        int manaTieuThuMoiGiay;
        int manaHienTai;
    public:
        //Constructor
        PhepThuat();
        PhepThuat(const std::string& ten,int satThuong,double tocDo,const std::string& loai,int mana);

        //Getter, setter
        std::string getLoaiPhep() const;
        int getManaTieuThuMoiGiay() const;
        int getManaHienTai() const;
        void setLoaiPhep(const std::string& loai);
        void setManaTieuThuMoiGiay(int mana);

        //Ham xu ly
        void TanCong() override;
        int SatThuong(int t) const override;
        std::string getLoai() const override;
        bool DuMana(int t) const;
        void SuDungMana(int t);
        void HoiMana();

        //Qua tai nhap xuat
        void xuat(std::ostream& os) const override;
        void nhap(std::istream& is) override;
        
};
#endif
