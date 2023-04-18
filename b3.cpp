#include <stdio.h>

int swap( int &a, int &b){
	int x = a;
	a = b;
	b = x;
}

int interchangesort(int a[], int n){
	for(int i = 0; i < n-1; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i] > a[j]){
				swap(a[i], a[j]);
			}
		}
	}
}

int main(){
	int a[] = {41, 23, 4, 14, 56, 1};
	int n = 6;
	interchangesort(a, n);
	printf("Mang sau khi sap xep la: ");
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	return 0;
}
