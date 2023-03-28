#include <stdio.h>

struct DonThuc{
	int a,n;
};

typedef struct DonThuc dt;
void Nhap(dt &);
void Xuat(dt);

void Nhap(DonThuc &dt){
	printf("Nhap a: \n");
	scanf("%d", &dt.a);
	printf("Nhap n la: \n");
	scanf("%d", &dt.n);
}

void Xuat(DonThuc dt){
	printf("P(x)= %dx^%d", dt.a, dt.n);
}

int main(){
	DonThuc dt;
	Nhap(dt);
	Xuat(dt);
	return 0;
}
