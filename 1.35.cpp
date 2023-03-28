#include <stdio.h>

struct SOTIETKIEM{
	char MaSo[5];
	char LoaiTietKiem[10];
	char HoTen[30];
	int CMND;
	struct{
		int ngay;
		int thang;
		int nam; 
	}NgayMo; 
	float SoTien; 
};

typedef struct SOTIETKIEM stk;
void Nhap(stk &);
void Xuat(stk);


void Nhap(SOTIETKIEM &stk){
	printf("Nhap ma so: \n");
	scanf("%s", &stk.MaSo);
	printf("Nhap loai tiet kiem: \n");
	scanf("%s", &stk.LoaiTietKiem);
	printf("Nhap ho ten nguoi gui: \n");
	scanf("%s", &stk.HoTen);
	printf("Nhap so cmnd: \n");
	scanf("%d", &stk.CMND);
	printf("Nhap ngay mo so: \n");
	scanf("%d/%d/%d", &stk.NgayMo.ngay, &stk.NgayMo.thang, &stk.NgayMo.nam);
	printf("Nhap so tien gui: \n");
	scanf("%f", &stk.SoTien);
}

void Xuat(SOTIETKIEM stk){
	printf("Ma so: %s \n", stk.MaSo);
	printf("Loai tiet kiem: %s \n", stk.LoaiTietKiem);
	printf("Ho ten: %s \n", stk.HoTen);
	printf("So cmnd: %d \n", stk.CMND);
	printf("Ngay mo: %d/%d/%d \n", stk.NgayMo.ngay, stk.NgayMo.thang, stk.NgayMo.nam);
	printf("So tien gui: %.2f", stk.SoTien);
}

int main(){
	SOTIETKIEM stk;
	Nhap(stk);
	Xuat(stk);
	return 0;
}
