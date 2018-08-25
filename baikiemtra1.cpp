#include <iostream>
#include <cmath>
using namespace std;
main()
{
	float dtb,ly,toan,hoa;
	string nguoi;
	cout << " Nhap ten sinh vien can kiem tra :" << endl;
	cin >> nguoi;
	cout << "Nhap vao lan luot diem Ly , Toan , Hoa cua :" << nguoi << endl;
	cin >> ly>>toan>>hoa;
	cout << "Diem trung binh ba mon toan ly hoa cua " << nguoi <<" la : " << (toan+ly+hoa)/3 << endl;
	dtb =(toan+ly+hoa)/3;
	if(dtb>=8)
	{
		cout <<"Xep loai xuat xac"<< endl;
	}
	else if(8>dtb&&dtb>=7)
	{
		cout <<"Xep loai gioi" << endl;
	}
    if(7>dtb&&dtb>=6)
	{
		cout <<"Xep loai kha" << endl;
	}
	else if(6>dtb&&dtb>=5)
	{
		cout <<"xep loai trung binh"<< endl;
	}
    if(dtb<5)
	{
		cout <<"xep loai yeu" << endl;
	}
}
