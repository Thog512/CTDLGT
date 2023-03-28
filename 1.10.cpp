#include <stdio.h>
#include <math.h>
 
struct DuongTron{
	int x, y, r;
	double pi;
	float C, D;
};

typedef struct DuongTron dt;
void Nhap(dt &);
void Xuat(dt);

void Nhap(DuongTron &dt){
	printf("Nhap toa do tam O= \n");
	scanf("%d%d", &dt.x, &dt.y);
	printf("Nhap ban kinh R= \n");
	scanf("%d", &dt.r);
}

void Xuat(DuongTron dt){
	printf("Duong Tron: (x-%d)^2 + (y-%d)^2 = %d^2 \n", dt.x, dt.y, dt.r);
	dt.pi = 3,14;
	dt.C= 2*dt.pi*dt.r;
	printf("Chu vi hinh tron= %.2f\n", dt.C);
	dt.D= 2*dt.r;
	printf("Dien tich hinh tron= %.2f", dt.D);
}

int main(){
	DuongTron dt;
	Nhap(dt);
	Xuat(dt);
	return 0;
}
