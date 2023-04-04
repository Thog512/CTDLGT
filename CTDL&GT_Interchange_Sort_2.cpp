//nguon: https://codelearn.io/sharing/cac-thuat-toan-sap-xep-trong-cpp

#include <stdio.h>

void swap(int &a, int &b){
	int x = a;
	a = b;
	b = x;
}

void InterchangeSort(int a[], int n){
	for(int i = 0; i < n-1; i++)
	{
		for(int j = i+1; j < n; j++)
		{
			if(a[i] > a[j])
			{
				swap(a[i], a[j]);
			}	
		}
	}
}

int main()
{
	int a[50], i, n;
	for(i = 0; ; i++){
		printf("Nhap phan tu thu a[%d]= ", i);
		scanf("%d", &a[i]);
	}
	n = i;
	InterchangeSort(a, n);
	printf("Mang sau khi sap xep: ");
	for(i = 0; i < n; i++)
		printf("%d ", a[i]);
	return 0;
}
