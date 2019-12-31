#pragma once
#include<iostream>
#include<math.h>
using namespace std;
class Diem
{
private:
	int x;
	int y;
public:
	Diem();
	float TinhKhoangCach(Diem);
	int get_x();
	int get_y();
	friend istream& operator>>(istream&, Diem&);
	friend ostream& operator<<(ostream&, Diem);
	~Diem();
};

