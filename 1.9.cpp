#include <stdio.h>

struct DuongTron{
	int a, b, R;
};

typedef struct DuongTron dt;
void Nhap(dt &);
void Xuat(dt);

void Nhap(DuongTron &dt){
	printf("Nhap toa do tam O= \n");
	scanf("%d%d", &dt.a, &dt.b);
	printf("Nhap ban kinh R= \n");
	scanf("%d", &dt.R);
}

void Xuat(DuongTron dt){
	printf("O: (x-%d)^2 + (y-%d)^2 = %d^2", dt.a, dt.b, dt.R);
}

int main(){
	DuongTron dt;
	Nhap(dt);
	Xuat(dt);
	return 0;
}

