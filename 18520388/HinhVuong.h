#pragma once
#include<iostream>
#include "Hinh.h"
#include"Diem.h"
using namespace std;

class HinhVuong : public Hinh{
private:
	Diem LT;//Left Top
	int A;
public:
	HinhVuong();
	friend istream& operator>>(istream&, HinhVuong&);
	friend ostream& operator<<(ostream&, HinhVuong);
	float TinhChuVi();
	float TinhDienTich();
	int GetHinh();
	bool NamTrong(Diem);
	void Nhap();
	void Xuat();
	~HinhVuong();
};