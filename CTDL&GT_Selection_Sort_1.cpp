//nguon: https://codelearn.io/sharing/cac-thuat-toan-sap-xep-trong-cpp

void swap(int &a, int &b){
	int x = a;
	a = b;
	b = x;
}

void SelectionSort(int a[], int n){
	int min;
	for(int i=0; i<n-1; i++){
		min = i;
		for(int j=i+1; j<n; j++){
			if(a[j] < a[min]){
				swap(j, min);
			}
		}
	}
}
