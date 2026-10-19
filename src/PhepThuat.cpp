#include "PhepThuat.h"
#include <iostream>

PhepThuat::PhepThuat(): 
    VuKhi("Phep mac dinh",25,1.0),
    loaiPhep("Loi"),
    manaTieuThuMoiGiay(5),
    manaHienTai(30) {}
PhepThuat::PhepThuat(const std::string&t,int s,double td,const std::string&l,int m):
    VuKhi(t,s,td),
    loaiPhep(l),
    manaTieuThuMoiGiay(m),
    manaHienTai(30) {}

std::string PhepThuat::getLoaiPhep() const {
    return loaiPhep;
}

int PhepThuat::getManaTieuThuMoiGiay() const {
    return manaTieuThuMoiGiay;
}

int PhepThuat::getManaHienTai() const {
    return manaHienTai;
}

void PhepThuat::setLoaiPhep(const std::string&l) {
    if(!l.empty())
        loaiPhep=l;
}

void PhepThuat::setManaTieuThuMoiGiay(int m) {
    if(m>=0)
        manaTieuThuMoiGiay=m;
}

void PhepThuat::TanCong() {
    std::cout<<" * VUUT! Phep "<<loaiPhep<<" bung no.\n";
}

int PhepThuat::SatThuong(int t) const { 
    if(t<0 || manaHienTai < manaTieuThuMoiGiay*t )
        return 0;
    return static_cast<int>(t*tocDoRaDon)*satThuongCoBan;
}

std::string PhepThuat::getLoai() const {
    return "Phep thuat";
}

bool PhepThuat::DuMana(int t) const {
    return t>=0 && manaHienTai >= manaTieuThuMoiGiay*t;
}

void PhepThuat::SuDungMana(int t) {
    if(DuMana(t))
        manaHienTai-=manaTieuThuMoiGiay*t;
}

void PhepThuat::HoiMana() {
    manaHienTai=30;
}

void PhepThuat::xuat(std::ostream&os) const {
    VuKhi::xuat(os);
    os<<"Loai phep: "<<loaiPhep<<"\nMana tieu thu/giay: "<<manaTieuThuMoiGiay<<"\nMana hien tai: "<<manaHienTai<<"/30\n";
}

void PhepThuat::nhap(std::istream&is) {
    VuKhi::nhap(is);
    std::string l;
    int m;
    std::cout<<"Loai phep: "; is>>l;
    std::cout<<"Mana tieu thu moi giay: "; is>>m;
    if(is&&!l.empty()&&m>=0) {
        loaiPhep=l;manaTieuThuMoiGiay=m;
    }
}


