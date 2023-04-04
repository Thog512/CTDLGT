//nguon: https://codelearn.io/sharing/cac-thuat-toan-sap-xep-trong-cpp

void swap(int &a, int &b){ // hàm đổi vị trí
	int x = a;
	a = b;
	b = x;
}

void InterchangeSort(int a[], int n){
	for(int i = 0; i < n-1; i++)
	{
		for(int j = i+1; j < n; j++)
		{
			if(a[i] > a[j]) //sắp xếp theo chiều giảm 
			{
				swap(a[i], a[j]); //nếu a[i] lớn hơn a[j] thì đổi chỗ
			}	
		}
	}
}
