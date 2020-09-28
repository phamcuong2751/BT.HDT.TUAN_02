#pragma once
#include <iostream>
using namespace std;

class CMangDong
{
private: 
	int* a;
	int n;
public:
	CMangDong();
	void Nhap();
	void Xuat();
	void SapXepMangTangDan();
	int TimPhanTuLonThuNhi();
	~CMangDong();
};