
#include <stdio.h>
 
void SapXep(int a[], int n) {
   int i, j, temp;
 
   for (i = 0; i < n-1; i++) {
      for (j = i+1; j < n; j++) {
         if (a[i] < a[j]) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
         }
      }
   }
}
 
int main() {
	int a[50], i, n;
	printf("Nhap so luong phan tu: ");
	scanf("%d", &n);
	printf("\nNhap cac phan tu: ");
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	} 
	printf("\nMang ban dau la: ");
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	SapXep(a, n);
	printf("\nMang sau khi sap xep la: ");
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	return 0;
}

