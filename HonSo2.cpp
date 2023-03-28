#include <stdio.h>

struct HonSo{
	int SoNguyen, Tu, Mau;
};

typedef struct HonSo hs;

void NhapHonSo(hs &);
void XuatHonSo(hs);

void NhapHonSo(HonSo &hs){
	printf("Nhap vao so nguyen: \n");
	scanf("%d", &hs.SoNguyen);
	printf("Nhap vao tu so: \n");
	scanf("%d", &hs.Tu);
	do{
		printf("\nNhap vao mau so: ");
		scanf("%d", &hs.Mau);
		if(hs.Mau == 0){
			printf("Mau so phai khac 0 !!!");
		}
	}while (hs.Mau == 0);
}

void XuatHonSo(HonSo hs){
	printf("%d(%d/%d)", hs.SoNguyen, hs.Tu, hs.Mau);
}

int main(){
	HonSo hs;
	NhapHonSo(hs);
	XuatHonSo(hs);
	return 0;
}
