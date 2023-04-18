#include <stdio.h>

int swap(int &a, int &b){
	int x = a;
	a = b;
	b = x;
}

int selectionsort(int a[], int n)
{
	int min, i, j;
	for(i=0; i<n-1; i++)
	{
		min = i;
		for(j= i+1; j<n; j++)
			if(a[j] < a[min])
				min = j;
		if(min != i)
			swap(a[min], a[i]);
	}
}

int main(){
	int a[] = {41, 23, 4, 14, 56, 1};
	int n = 6;
	selectionsort(a, n);
	printf("Mang sau khi sap xep la: ");
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	return 0;
}
