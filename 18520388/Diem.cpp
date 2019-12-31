#include "Diem.h"
istream& operator>>(istream& ip, Diem& D)
{
	cout << "Nhap hoanh do: ";
	ip >> D.x;
	cout << "Nhap tung  do: ";
	ip >> D.y;
	return ip;
}
ostream& operator<<(ostream& op, Diem D)
{
	op << "(" << D.x << "," << D.y << ")";
	return op;
}
float Diem::TinhKhoangCach(Diem D)
{
	int delta_x = x - D.x;
	int delta_y = y - D.y;
	return sqrt(delta_x*delta_x + delta_y*delta_y);
}
int Diem::get_x(){
	return x;
}
int Diem::get_y(){
	return y;
}
Diem::Diem()
{
	x = 0;
	y = 0;
}


Diem::~Diem()
{
}
