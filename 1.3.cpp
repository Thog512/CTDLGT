#include <stdio.h>
#include <conio.h>

struct ToaDoDiem{
	char Diem;
	int x,y;
};

typedef struct ToaDoDiem tdd;

void Nhap(tdd &);
void Xuat(tdd);

void Nhap(ToaDoDiem &tdd){
	printf("Nhap ten diem (Chu in hoa) \n");
	scanf("%c", &tdd.Diem);
	printf("Nhap hoanh do x: \n");
	scanf("%d", &tdd.x);
	printf("Nhap tung do y: \n");
	scanf("%d", &tdd.y);
}

void Xuat(ToaDoDiem tdd){
	printf("%c(%d,%d)", tdd.Diem, tdd.x, tdd.y);
}

int main(){
	ToaDoDiem tdd;
	Nhap(tdd);
	Xuat(tdd);
	return 0;
}
