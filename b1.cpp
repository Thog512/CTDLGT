#include <stdio.h>

int binarysearch(int a[], int n, int x){
	int l = 0, r = n-1;
	while(l < r){
		int mid = (l+r)/2;
		if(a[mid] == x){
			return mid;
		}
		else if(a[mid] < x){
			l = mid + 1;
		}
		else 
			r = mid;
	}
	return -1;
}

int main(){
	int a[] = {2, 3, 4, 10, 40};
	int n = 5;
	int x = 10;
	int ketqua = binarysearch(a, n, x);
	if(ketqua == -1){
		printf("khong tim thay phan tu");
	}else
		printf("Phan tu %d o vi tri a[%d]", x, ketqua);
}
