#include <stdio.h>

void swap(int &a, int &b){
	int x= a;
	a= b;
	b= x;
}

int quicksort(int a[], int l, int h){
	int p = a[h];
	int i = l - 1;
	int j;
	for(j=l; j <=h; j++){
		if(a[j] < p){
			i++;
			swap(a[i], a[j]);
		}
	}
	swap(a[i+1], a[h]);
	return i+1;
}

