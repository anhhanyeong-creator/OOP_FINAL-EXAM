#include "NhanVat.h"
#include <algorithm>
#include <iostream>
NhanVat::NhanVat():ten("Hac Si"),mau(100),mauToiDa(100){}
NhanVat::NhanVat(const std::string&t,int hp):ten(t),mau(std::max(0,hp)),mauToiDa(std::max(1,hp)){}
std::string NhanVat::getTen()const{return ten;}
int NhanVat::getMau()const{return mau;}
int NhanVat::getMauToiDa()const{return mauToiDa;}
void NhanVat::setTen(const std::string&t){if(!t.empty())ten=t;}
void NhanVat::setMau(int hp){mau=std::clamp(hp,0,mauToiDa);}
void NhanVat::themVuKhi(std::unique_ptr<VuKhi>vk){if(vk)danhSachVuKhi.push_back(std::move(vk));}
VuKhi* NhanVat::getVuKhi(int i){return i>=0&&i<(int)danhSachVuKhi.size()?danhSachVuKhi[i].get():nullptr;}
int NhanVat::soVuKhi()const{return (int)danhSachVuKhi.size();}
void NhanVat::nhanSatThuong(int s){mau=std::max(0,mau-std::max(0,s));}
void NhanVat::hoiMau(){mau=mauToiDa;}
void NhanVat::hienThiTrangThai()const{
 std::cout<<"Nhan vat: "<<ten<<" | HP: "<<mau<<"/"<<mauToiDa<<"\n";
 for(size_t i=0;i<danhSachVuKhi.size();++i)std::cout<<i+1<<". "<<danhSachVuKhi[i]->getTen()<<" ["<<danhSachVuKhi[i]->getLoai()<<"] - sat thuong "<<danhSachVuKhi[i]->getSatThuongCoBan()<<"\n";
}
