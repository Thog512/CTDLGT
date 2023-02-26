#include <stdio.h>
#include <conio.h>

struct PhanSo
{
	int TuSo, MauSo;
};
typedef struct PhanSo PS;

void Nhap(PS &t)
{
	printf("Nhap Tu So: \n");
	scanf("%d", &t.TuSo);
	do{
	printf("Nhap Mau So: \n");
	scanf("%d", &t.MauSo);
	if(t.MauSo==0)
	printf("Nhap lai mau so ");
	}while(t.MauSo==0);

}

void Xuat(PS t)
{
	printf("%d/%d", t.TuSo, t.MauSo);
}

int main(){
	PS t1;
	Nhap(t1);
	Xuat(t1);
	return 0;
}
