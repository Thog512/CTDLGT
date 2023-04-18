#include <stdio.h>

int insersionsort(int a[], int n){
	int pos, x, i;
	for(i=0; i<n; i++){
		x = a[i];
		pos = i;
		while(pos > 0 && x < a[pos -1]){
			a[pos] = a[pos -1];
			pos--;
		}
		a[pos] = x;
	}
}

int main(){
	int a[] = {41, 23, 4, 14, 56, 1};
	int n = 6;
	insersionsort(a, n);
	printf("Mang sau khi nhap la: ");
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	return 0;
}
