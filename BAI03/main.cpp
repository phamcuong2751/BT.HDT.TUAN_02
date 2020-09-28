#include "CMangDong.h"

void main() {
	CMangDong a;
	a.Nhap();
	a.Xuat();
	cout << "\nPhan tu lon thu nhi o vi tri A[" << a.TimPhanTuLonThuNhi() << "]" << endl;
	
	a.SapXepMangTangDan();
	cout << endl;
	a.Xuat();
	cout << endl;
	system("pause");
}
