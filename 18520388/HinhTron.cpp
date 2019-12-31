#include"HinhTron.h"
istream& operator>>(istream& ip, HinhTron& O)
{
	cout << "NHAP HINH TRON\n";
	cout << "Nhap diem tam:\n";
	ip >> O.O;
	cout << "Nhap ban kinh:";
	ip >> O.R;
	return ip;
}
ostream& operator<<(ostream& op, HinhTron O)
{
	op << "HTr(" << O.O << "," << O.R << ")";
	return op;
}
float HinhTron::TinhChuVi(){
	return(2 * R * M_PI);
}
float HinhTron::TinhDienTich(){
	return(R*R*M_PI);
}
int HinhTron::GetHinh(){
	return 4;
}
bool HinhTron::NamTrong(Diem D){
	return (D.TinhKhoangCach(O)<R);
}
HinhTron::HinhTron()
{
}
HinhTron::~HinhTron()
{
}
void HinhTron::Nhap(){
	cin >> *this;
}
void HinhTron::Xuat(){
	cout << *this;
}