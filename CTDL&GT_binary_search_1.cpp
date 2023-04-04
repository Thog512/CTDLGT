#include <stdio.h>

int BinarySearch(int a[], int n, int x){
	int l = 0, r = n-1;
	while (l < r){
		int mid = (l+r)/2;
		if (a[mid] < x){
			l = mid + 1;
		}
		else{
			r = mid;
		}
	}
	if (a[l] == x){
		return l;
	}
	return -1;
}

int main(){
	int n, x, i, a[100];
	printf("Nhap so luong phan tu trong mang: \n");
	scanf("%d", &n);
	for(i=0; i<n; i++){	
	printf("Nhap phan tu thu a[%d]: ", i);
	scanf("%d", &a[i]);
	}
	printf("Nhap phan tu x muon tim: \n");
	scanf("%d", &x);
	int ketqua = BinarySearch(a, n, x);
	if (ketqua == -1)
		printf("Khong tim thay phan tu %d", x);
	else
		printf("Phan tu %d tai vi tri %d", x, ketqua); 
	return 0;
}
