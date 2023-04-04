#include <stdio.h>

int LinearSearch(int a[], int n, int x){
	for(int i=0; i<n; i++){
		if(a[i] == x){
			return i;
		}
	}
	return -1;
}

int main(){
	int a[100], n, x, i;
	printf("Nhap so luong phan tu trong mang: \n");
	scanf("%d", &n);
	for (i=0; i<n; i++){
		printf("Nhap phan tu thu a[%d]: \n", i);
		scanf("%d", &a[i]);
	}
	printf("Nhap phan tu muon tim: \n");
	scanf("%d", &x);
	int ketqua = LinearSearch(a, n, x);
	if(ketqua == -1){
		printf("Khong tim thay phan tu %d", x);
	}else{
		printf("Phan tu %d tai vi tri a[%d]", x, ketqua);
	}
	return 0;
}
