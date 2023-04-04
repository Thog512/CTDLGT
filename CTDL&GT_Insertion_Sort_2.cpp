//nguon: https://codelearn.io/sharing/cac-thuat-toan-sap-xep-trong-cpp

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

int main() {
  int a[100], n, i;
  for (i = 0; ; i++) {
    printf("Nhap gia tri thu %d = ", i);
    scanf("%d", &a[i]);
    if (a[i] == 0) break;
  }
  n = i;
  InsertionSort(a, n);
  printf("Mang sau khi sap xep: ");
  for (i = 0; i < n; i++)
     printf("%d ", a[i]);
  return 0;
}
