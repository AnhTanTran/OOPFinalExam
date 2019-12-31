#pragma once
#include<iostream>
#include "Hinh.h"
#include"Diem.h"
using namespace std;

class TamGiac : public Hinh{
private:
	Diem A;
	Diem B;
	Diem C;
public:
	TamGiac();
	friend istream& operator>>(istream&, TamGiac&);
	friend ostream& operator<<(ostream&, TamGiac);
	float TinhChuVi();
	float TinhDienTich();
	int GetHinh();
	bool NamTrong(Diem);
	void Nhap();
	void Xuat(); 
	~TamGiac();
};
