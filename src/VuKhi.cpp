#include "VuKhi.h"
#include <limits>
VuKhi::VuKhi() : ten("Chua dat ten"), satThuongCoBan(10), tocDoRaDon(1.0) {}
VuKhi::VuKhi(const std::string& t, int s, double tocDo) : ten(t), satThuongCoBan(s), tocDoRaDon(tocDo) {}
std::string VuKhi::getTen() const { return ten; }
int VuKhi::getSatThuongCoBan() const { return satThuongCoBan; }
double VuKhi::getTocDoRaDon() const { return tocDoRaDon; }
void VuKhi::setTen(const std::string& t) { if (!t.empty()) ten=t; }
void VuKhi::setSatThuongCoBan(int s) { if (s>=0) satThuongCoBan=s; }
void VuKhi::setTocDoRaDon(double t) { if (t>0) tocDoRaDon=t; }
void VuKhi::xuat(std::ostream& os) const {
    os << "Ten vu khi: " << ten << "\nSat thuong co ban: " << satThuongCoBan
       << "\nToc do ra don: " << tocDoRaDon << " don/giay\n";
}
void VuKhi::nhap(std::istream& is) {
    std::string t; int s; double tocDo;
    std::cout << "Ten vu khi: "; std::getline(is >> std::ws,t);
    std::cout << "Sat thuong co ban: "; is >> s;
    std::cout << "Toc do ra don (don/giay): "; is >> tocDo;
    if (is && !t.empty() && s>=0 && tocDo>0) { ten=t; satThuongCoBan=s; tocDoRaDon=tocDo; }
    else { is.clear(); is.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); }
}
std::ostream& operator<<(std::ostream& os, const VuKhi& vk) { vk.xuat(os); return os; }
std::istream& operator>>(std::istream& is, VuKhi& vk) { vk.nhap(is); return is; }
