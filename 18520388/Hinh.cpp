#include "Hinh.h"
istream& operator>>(istream& ip, Hinh& H)
{
	H.Nhap();
	return ip;
}
ostream& operator<<(ostream& op, Hinh& H)
{
	H.Xuat();
	return op;
}
float Hinh::TinhChuVi(){
	return 0;
}
float Hinh::TinhDienTich(){
	return 0;
}
int Hinh::GetHinh(){
	return 0;
}
bool Hinh::NamTrong(Diem D){
	return false;
}
void Hinh::Nhap()
{
}
void Hinh::Xuat()
{
}
Hinh::Hinh()
{
}
Hinh::~Hinh()
{
}
