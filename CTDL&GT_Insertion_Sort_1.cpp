//nguon: https://codelearn.io/sharing/cac-thuat-toan-sap-xep-trong-cpp

void InsertionSort(int a[], int n){
	int i, j, x;
	for (i=1; i<n; i++){
		x = a[i];
		j = i-1;
		while(j >= 0 && a[j] > x){
			a[j+1] = a[j];
			j= j-1;;
		}
		a[j+1] = x; 
	}
}
