#include <stdio.h>

void swap(int &a, int &b){
	int x = a;
	a = b;
	b = x;
}

void BublleSort(int a[], int n){
	int i, j; 
	for(i = 0; i < n-1; i++){
		for(j = 0; j < n-i-1; j++){
			if(a[j] > a[j+1]){
				swap (a[j], a[j+1]);
			}
		}
	}
}

int main(){
	int n, a[100], i;
	printf("Nhap kich thuoc mang: \n");
	scanf("%d", &n);
	printf("Nhap cac phan tu cua mang: \n");
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	BublleSort(a, n);
	printf("Mang sau khi sap xep la: \n");
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	return 0;
} 
