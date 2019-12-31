#pragma once
#include<iostream>
#include "Hinh.h"
#include"Diem.h"
using namespace std;

class HinhChuNhat : public Hinh{
private:
	Diem LT;//Left Top
	Diem RB;//Right Bottom
public:
	HinhChuNhat();
	friend istream& operator>>(istream&, HinhChuNhat&);
	friend ostream& operator<<(ostream&, HinhChuNhat);
	float TinhChuVi();
	float TinhDienTich();
	int GetHinh();
	bool NamTrong(Diem);
	void Nhap();
	void Xuat();
	~HinhChuNhat();
};
