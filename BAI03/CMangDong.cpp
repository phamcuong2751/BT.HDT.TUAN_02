#include "CMangDong.h"
#include <time.h>
#include <Windows.h>

CMangDong::CMangDong() {
	this->n = 0;
	a = new int[n];
}

void CMangDong::Nhap() {
	do {
		cout << "Nhap so luong phan tu: ";
		cin >> n;
		if (n <= 0)
			cout << "\nSo luong phan tu phai lon hon 0!\n";
	} while (n <= 0);
	for (int i = 0; i < n; i++)
	{
		cout << "A[" << i << "] = ";
		cin >> a[i];
	}
}

void CMangDong::Xuat() {
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}

void CMangDong::SapXepMangTangDan() {
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i]>a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
 
int CMangDong::TimPhanTuLonThuNhi() {
	int max = a[0], second_max = a[0], pos_max = 0, pos_second_max = 0;

	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			second_max = max;
			pos_second_max = pos_max;
			pos_max = i;
			max = a[i];
		}
	}
	return pos_second_max;
}

CMangDong::~CMangDong() {
	if (a != NULL) {
		delete[] a;
		a = NULL;
		n = 0;
	}
}