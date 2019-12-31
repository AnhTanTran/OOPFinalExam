#include"TamGiac.h"
istream& operator>>(istream& ip, TamGiac& T)
{
	cout << "NHAP TAM GIAC\n";
	cout << "Nhap diem A:\n";
	ip >> T.A;
	cout << "Nhap diem B:\n";
	ip >> T.B;
	cout << "Nhap diem C:\n";
	ip >> T.C;

	return ip;
}
ostream& operator<<(ostream& op, TamGiac T)
{
	op << "TG("<<T.A<<","<<T.B<<","<<T.C<<")";
	return op;
}
float TamGiac::TinhChuVi(){
	return(A.TinhKhoangCach(B) + B.TinhKhoangCach(C) + C.TinhKhoangCach(A));
}
float TamGiac::TinhDienTich(){
	float a = A.TinhKhoangCach(B);
	float b = B.TinhKhoangCach(C);
	float c = C.TinhKhoangCach(A);
	float r = (a + b + c) / 2;
	return sqrt(r*(r - a)*(r - b) *(r - c));
}
int TamGiac::GetHinh(){
	return 1;
}
float area(Diem A, Diem B, Diem C);
bool TamGiac::NamTrong(Diem D){
	float ABC = area(A,B,C);
	float DAB = area(D,A,B);
	float DBC = area(D,B,C);
	float DCA = area(D,C,A);
	return (abs(ABC - (DAB + DBC + DCA))<0.001);
}
TamGiac::TamGiac()
{
}
TamGiac::~TamGiac()
{
}
float area(Diem A,Diem B,Diem C)
{
	float a = A.TinhKhoangCach(B);
	float b = B.TinhKhoangCach(C);
	float c = C.TinhKhoangCach(A);
	float r = (a + b + c) / 2;
	return sqrt(r*(r - a)*(r - b) *(r - c));
}
void TamGiac::Nhap(){
	cin >> *this;
}
void TamGiac::Xuat(){
	cout << *this;
}