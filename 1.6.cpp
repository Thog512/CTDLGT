#include <stdio.h>

struct DaThuc{
	int a,n;
};

typedef struct DaThuc dt;
void Nhap(dt &);
void Xuat(dt);

void Nhap(DaThuc &dt){
	printf("Nhap n: \n");
	scanf("%d", &dt.n);
}

void Xuat(DaThuc dt){
	printf("P(x)= ");
	for(int i = dt.n; i > 0; i--){
		printf("a.%d.X^%d + ", i, i);
	} printf(" a.0");
}

int main(){
	DaThuc dt;
	Nhap(dt);
	Xuat(dt);
	return 0;
}
