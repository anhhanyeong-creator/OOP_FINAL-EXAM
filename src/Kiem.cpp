#include "Kiem.h"
#include <iostream>
Kiem::Kiem():VuKhi("Kiem mac dinh",18,1.0),doBen(100){}
Kiem::Kiem(const std::string&t,int s,double td,int b):VuKhi(t,s,td),doBen(b){}
int Kiem::getDoBen()const{return doBen;}
void Kiem::setDoBen(int b){if(b>=0)doBen=b;}
void Kiem::TanCong(){std::cout<<" * XEO! Kiem "<<ten<<" chem mot nhat.\n";}
int Kiem::SatThuong(int t)const{if(t<0||doBen<=0)return 0;int soNhat=static_cast<int>(t*tocDoRaDon);return soNhat*satThuongCoBan;}
std::string Kiem::getLoai()const{return "Kiem";}
void Kiem::xuat(std::ostream&os)const{VuKhi::xuat(os);os<<"Loai: Kiem\nDo ben: "<<doBen<<"/100\n";}
void Kiem::nhap(std::istream&is){VuKhi::nhap(is);int b;std::cout<<"Do ben: ";is>>b;if(is&&b>=0)doBen=b;}
