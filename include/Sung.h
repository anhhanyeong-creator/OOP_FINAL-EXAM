#ifndef SUNG_H
#define SUNG_H
#include "VuKhi.h"
class Sung : public VuKhi {
private:
    int danTrongOng;
    double tocDoThayBang; // giay
public:
    Sung();
    Sung(const std::string& ten, int satThuong, double tocDo, int dan, double thayBang);
    int getDanTrongOng() const;
    double getTocDoThayBang() const;
    void setDanTrongOng(int dan);
    void setTocDoThayBang(double giay);
    void TanCong() override;
    int SatThuong(int t) const override;
    std::string getLoai() const override;
    void xuat(std::ostream& os) const override;
    void nhap(std::istream& is) override;
    void NapDan();
    bool ConDan() const;
    void SuDungDan();
};
#endif
