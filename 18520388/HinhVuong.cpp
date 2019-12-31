#include"HinhVuong.h"
istream& operator>>(istream& ip, HinhVuong& V)
{
	cout << "NHAP HINH VUONG\n";
	cout << "Nhap diem trai tren:\n";
	ip >> V.LT;
	cout << "Nhap do dai canh:";
	ip >> V.A;
	return ip;
}
ostream& operator<<(ostream& op, HinhVuong V)
{
	op << "HV(" << V.LT << "," << V.A << ")";
	return op;
}
float HinhVuong::TinhChuVi(){
	return(4*A);
}
float HinhVuong::TinhDienTich(){
	return(A*A);
}
int HinhVuong::GetHinh(){
	return 3;
}
bool HinhVuong::NamTrong(Diem D){
	bool x = (D.get_x() >= LT.get_x()) && (D.get_x() <= LT.get_x()+A);
	bool y = (D.get_y() <= LT.get_y()) && (D.get_y() >= LT.get_y()-A);
	return (x&&y);
}
HinhVuong::HinhVuong()
{
}
HinhVuong::~HinhVuong()
{
}
void HinhVuong::Nhap(){
	cin >> *this;
}
void HinhVuong::Xuat(){
	cout << *this;
}