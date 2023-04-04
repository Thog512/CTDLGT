//nguon: https://codelearn.io/sharing/cac-thuat-toan-sap-xep-trong-cpp

void InsertionSort(int a[], int n){
	int i, j, t;
	for (i=1; i<n; i++){
		t = a[i];
		j = i-1;
		while(j >= 0 && a[j] > t){
			a[j+1] = a[j];
			j= j-1;;
		}
		a[j+1] = t; 
	}
}
