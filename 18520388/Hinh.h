#pragma once
#include<iostream>
#include"Diem.h"
//#include"TamGiac.h"
using namespace std;
class Hinh
{
public:
	Hinh();
	friend istream& operator>>(istream&, Hinh&);
	friend ostream& operator<<(ostream&, Hinh&);
	virtual float TinhChuVi();
	virtual float TinhDienTich();
	virtual int GetHinh();
	virtual bool NamTrong(Diem);
	virtual void Nhap();
	virtual void Xuat();
	~Hinh();
};
