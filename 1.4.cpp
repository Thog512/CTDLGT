#include <stdio.h>

struct ToaDo0Gian{
	char Diem;
	int x, y, z;
};

typedef struct ToaDo0Gian td;
void Nhap(td &);
void Xuat(td);

void Nhap(ToaDo0Gian &td){
	printf("Nhap ten diem (Chu in hoa): \n");
	scanf("%c", &td.Diem);
	printf("Nhap x: \n");
	scanf("%d", &td.x);
	printf("Nhap y: \n");
	scanf("%d", &td.y);
	printf("Nhap z: \n");
	scanf("%d", &td.z);
}

void Xuat(ToaDo0Gian td){
	printf("%c(%d,%d,%d)", td.Diem, td.x, td.y, td.z);
}

int main(){
	ToaDo0Gian td;
	Nhap(td);
	Xuat(td);
	return 0;
}
