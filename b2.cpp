#include <stdio.h>

int linearsearch(int a[], int n, int x){
	for(int i=0; i<n; i++){
		if(a[i] == x){
			return i;
		}
	}return -1;
}

int main(){
	int a[] = {2, 3, 4, 10, 40};
	int n = 5;
	int x = 10;
	int ketqua = linearsearch(a, n, x);
	if(ketqua == -1){
		printf("Khong tim thay phan tu");
	}else
		printf("Phan tu %d o vi tri a[%d]", x, ketqua);
	return 0;
}
