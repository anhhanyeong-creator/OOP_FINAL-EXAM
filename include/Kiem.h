#ifndef KIEM_H
#define KIEM_H
#include "VuKhi.h"
class Kiem : public VuKhi {
private:
    int doBen;
public:
    Kiem();
    Kiem(const std::string& ten,int satThuong,double tocDo,int doBen);
    int getDoBen() const;
    void setDoBen(int doBen);
    void TanCong() override;
    int SatThuong(int t) const override;
    std::string getLoai() const override;
    void xuat(std::ostream& os) const override;
    void nhap(std::istream& is) override;
};
#endif
