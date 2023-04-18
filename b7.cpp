#include <stdio.h>

int swap(int &a, int &b){
	int x = a;
	a = b;
	b = x;
}

int heapify(int a[], int n, int i){
	int max = i;
	int left = 2*i + 1;
	int right = 2*i + 2;
	if(left < n && a[left] > a[max]){
		max = left;
	}
	if(right < n && a[right] > a[max]){
		max = right;
	}
	if(max != i){
		swap(a[max], a[i]);
		heapify(a, n, max);
	}
}

int heapsort(int a[], int n){
	for(int i = n/2-1; i >= 0; i--){
		heapify(a, n, i);
	}
	for(int i = n-1; i >= 0; i--){
		swap(a[0], a[i]);
		heapify(a, i, 0);
	}
}

int main(){
	int a[] = {41, 23, 4, 14, 56, 1};
	int n = 6;
	heapsort(a, n);
	printf("Mang sau khi sap xep la: ");
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	return 0;
}
