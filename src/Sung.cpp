#include "Sung.h"
#include <iostream>
#include <limits>
Sung::Sung() : VuKhi("Sung mac dinh",20,2.0), danTrongOng(6), tocDoThayBang(2.0) {}
Sung::Sung(const std::string& t,int s,double td,int d,double tb):VuKhi(t,s,td),danTrongOng(d),tocDoThayBang(tb){}
int Sung::getDanTrongOng() const{return danTrongOng;}
double Sung::getTocDoThayBang() const{return tocDoThayBang;}
void Sung::setDanTrongOng(int d){if(d>=0)danTrongOng=d;}
void Sung::setTocDoThayBang(double g){if(g>0)tocDoThayBang=g;}
void Sung::TanCong(){std::cout<<" * BANG! Sung "<<ten<<" khai hoa.\n";}
int Sung::SatThuong(int t) const {if(t<0||danTrongOng<=0)return 0; int soPhat=static_cast<int>(t*tocDoRaDon); if(soPhat>danTrongOng)soPhat=danTrongOng;return soPhat*satThuongCoBan;}
std::string Sung::getLoai() const{return "Sung";}
void Sung::xuat(std::ostream& os) const{VuKhi::xuat(os);os<<"Loai: Sung\nDan trong ong: "<<danTrongOng<<"\nThoi gian thay bang: "<<tocDoThayBang<<" giay\n";}
void Sung::nhap(std::istream& is){VuKhi::nhap(is);int d;double tb;std::cout<<"So dan trong ong: ";is>>d;std::cout<<"Thoi gian thay bang: ";is>>tb;if(is&&d>=0&&tb>0){danTrongOng=d;tocDoThayBang=tb;}}
void Sung::NapDan(){danTrongOng=6;}
bool Sung::ConDan() const{return danTrongOng>0;}
void Sung::SuDungDan(){if(danTrongOng>0)--danTrongOng;}
