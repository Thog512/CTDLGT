//nguon: https://codelearn.io/sharing/cac-thuat-toan-sap-xep-trong-cpp

#include <stdio.h>

void swap(int &a, int &b){
	int x = a;
	a = b;
	b = x;
}

void SelectionSort(int a[], int n){
	int min;
	for(int i=0; i<n-1; i++){
		min = i;
		for(int j=i+1; j<n; j++){
			if(a[j] < a[min]){
				swap(j, min);
			}
		}
	}
}

int main() {
  int a[100], n, i;
  for (i = 0; ; i++) {
    printf("Nhap gia tri thu %d = ", i);
    scanf("%d", &a[i]);
  }
  n = i;
  SelectionSort(a, n);
  printf("Mang sau khi sap xep: ");
  for (i = 0; i < n; i++)
     printf("%d ", a[i]);
  return 0;
}
