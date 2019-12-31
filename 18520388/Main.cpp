#include<iostream>
#include "Diem.h"
#include<math.h>
#include"TamGiac.h"
#include"Hinh.h"
#include"HinhChuNhat.h"
#include"HinhVuong.h"
#include"HinhTron.h"
#include<vector>
using namespace std;
int main(){
	int n;
	vector<Hinh*>H;
	//NHAP
	cout << "NHAP SO HINH: "; cin >> n;
	for (int i = 0; i < n; i++){
		int type;
		Hinh *temp;
		cout << "NHAP LOAI HINH(tam giac 1, HCN 2, vuong 3, tron 4): "; cin >> type;
		switch (type)
		{
		case 1:{
				   temp = new TamGiac;
				   cin >> *temp;
				   H.push_back(temp);
				   break;
		}
		case 2:{
				   temp = new HinhChuNhat;
				   cin >> *temp;
				   H.push_back(temp);
				   break;
		}
		case 3:{
				   temp = new HinhVuong;
				   cin >> *temp;
				   H.push_back(temp);
				   break;
		}
		case 4:{
				   temp = new HinhTron;
				   cin >> *temp;
				   H.push_back(temp);
				   break;
		}
		default:
			break;
		}
	}

	//XUAT KET QUA
	cout << "\n=>CAC KET QUA:\n";

	int TG = 0, HCN = 0, HV = 0, HTr = 0;
	for (int i = 0; i < n; i++){
		switch (H[i]->GetHinh())
		{
		case 1:
			TG++; break;
		case 2:
			HCN++; break;
		case 3:
			HV++; break;
		case 4:
			HTr++; break;
		default:
			break;
		}
	}
	
	cout << "TG: "<<TG<<", HCN: "<<HCN<<", HV: "<<HV<<", HTr: "<<HTr<<endl;

	float max = 0, min = 0;
	for (int i = 1; i < n; i++){
		if (H[i]->TinhChuVi()>H[max]->TinhChuVi())
			max = i;
		if (H[i]->TinhDienTich()<H[min]->TinhDienTich())
			min = i;
	}
	cout << "Hinh co chu vi lon nhat:\n" << *H[max] << endl;
	cout << "Hinh co dien tich nho nhat:\n" << *H[min]<<endl;

	Diem D;
	cout << "Nhap diem D de kiem tra:\n";
	cin >> D;
	cout << "Diem D nam trong cac hinh sau:\n";
	for (int i = 0; i < n; i++){
		if (H[i]->NamTrong(D))
			cout << *H[i]<<endl;
	}
	system("pause");
	return 0;
}


//EXAMPLE INPUT:
/*
6

1
0 0
5 0
0 5

2
0 5
3 0

3
0 6
4

4
2 2
3

4
2 2
6

1
0 0
2 0
0 2

*/