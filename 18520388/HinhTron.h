#pragma once
#include<iostream>
#define _USE_MATH_DEFINES
#include<cmath>
#include "Hinh.h"
#include"Diem.h"
using namespace std;

class HinhTron : public Hinh{
private:
	Diem O;//Left Top
	int R;
public:
	HinhTron();
	friend istream& operator>>(istream&, HinhTron&);
	friend ostream& operator<<(ostream&, HinhTron);
	float TinhChuVi();
	float TinhDienTich();
	int GetHinh();
	bool NamTrong(Diem);
	void Nhap();
	void Xuat();
	~HinhTron();
};