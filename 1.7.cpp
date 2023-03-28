#include <stdio.h>

struct ThoiGian{
	int Ngay, Thang, Nam;
};

typedef struct ThoiGian tg;
void Nhap(tg &);
void Xuat(tg);

void Nhap(ThoiGian &tg){
	printf("Nhap ngay : \n");
	scanf("%d", &tg.Ngay);
	printf("Nhap thang: \n");
	scanf("%d", &tg.Thang);
	printf("Nhap nam: \n");
	scanf("%d", &tg.Nam);
}

void Xuat(ThoiGian tg){
	printf("Ngay: %d/%d/%d", tg.Ngay, tg.Thang, tg.Nam);
}

int main(){
	ThoiGian tg;
	Nhap(tg);
	Xuat(tg);
	return 0;
}
