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
	int a[100];
	int n = 0;
	printf("Nhap vao cac phan tu cua mang (ket thuc khi nhap 0): \n");
	do{
		scanf("%d", &a[n]);
		n++;
	}while (a[n-1] != 0);
	printf("\nMang ban dau la: ");
	for (int i = 0; i < n-1; i++){
		printf("%d ", a[i]);
	}
	InterchangeSort(a, n-1);
	printf("\nMang sau khi xep la: ");
	for(int i = 0; i < n-1; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}
