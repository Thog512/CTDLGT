#include <stdio.h>

void InsertionSort(int a[], int n){
	int i, j, t;
	for (i=1; i<n; i++){
		t = a[i];
		j = i-1;
		while(j >= 0 && a[j] > t){
			a[j+1] = a[j];
			j= j-1;;
		}
		a[j+1] = t; 
	}
}

int main(){
	int a[50], i, n;
	printf("Nhap mang : \n");
	scanf("%d", &n);
	printf("Nhap cac phan tu cua mang: \n");
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
		if (a[i] == 0){
			n = i;
		}
	}
	InsertionSort(a, n);
	printf("Mang sau khi sap xep la: \n");
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	return 0;
}
