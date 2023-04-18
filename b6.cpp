#include <stdio.h>


int quicksort(int a[], int l, int r){
	int p = a[(l+r)/2];
	int i = l;
	int j = r;
	while (i < j){
		while (a[i] < p){
			i++;
		}
		while (a[j] > p){
			j--;
		}
		if(i <= j){
			int x = a[i];
			a[i] = a[j];
			a[j] = x;
			i++;
			j--;
		}
	}
	if(i < r){
	quicksort(a, i, r);
	}
	if(l < j){
	quicksort(a, l, j);
	}
}

int main(){
	int a[] = {41, 23, 4, 14, 56, 1};
	int n = 6;
	quicksort(a, 0, n-1);
	printf("Mang sau khi sap xep la: ");
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	return 0;
}
