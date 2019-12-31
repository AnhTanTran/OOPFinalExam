#include"HinhChuNhat.h"
istream& operator>>(istream& ip, HinhChuNhat& C)
{
	cout << "NHAP HINH CHU NHAT\n";
	cout << "Nhap diem trai tren:\n";
	ip >> C.LT;
	cout << "Nhap diem phai duoi:\n";
	ip >> C.RB;
	return ip;
}
ostream& operator<<(ostream& op, HinhChuNhat C)
{
	op << "HCN(" << C.LT << "," << C.RB << ")";
	return op;
}
float HinhChuNhat::TinhChuVi(){
	return(2 * (RB.get_x() - LT.get_x()) + 2 * (LT.get_y() - RB.get_y()));
}
float HinhChuNhat::TinhDienTich(){
	return((RB.get_x()-LT.get_x()) * (LT.get_y()-RB.get_y()));
}
int HinhChuNhat::GetHinh(){
	return 2;
}
bool HinhChuNhat::NamTrong(Diem D){
	bool x = (D.get_x() >= LT.get_x()) && (D.get_x() <= RB.get_x());
	bool y = (D.get_y() <= LT.get_y()) && (D.get_y() >= RB.get_y());
	return (x&&y);
}
HinhChuNhat::HinhChuNhat()
{
}
HinhChuNhat::~HinhChuNhat()
{
}
void HinhChuNhat::Nhap(){
	cin >> *this;
}
void HinhChuNhat::Xuat(){
	cout << *this;
}