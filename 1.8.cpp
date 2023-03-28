#include <stdio.h>

struct DuongThang{
	int a, b, c;
};

typedef struct DuongThang dt;
void Nhap(dt &);
void Xuat(dt);

void Nhap(DuongThang &dt){
	printf("Nhap lan luot a, b, c = \n");
	scanf("%d%d%d", &dt.a, &dt.b, &dt.c);
}

void Xuat(DuongThang dt){
	printf("Duong thang: %dx + %dy + %d", dt.a, dt.b, dt.c);
}

int main(){
	DuongThang dt;
	Nhap(dt);
	Xuat(dt);
	return 0;
}
