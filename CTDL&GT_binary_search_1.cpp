\\nguon: https://codelearn.io/learning/data-structure-and-algorithms/825257

int BinarySearch(int a[], int n, int x){
	int l = 0, r = n-1; //gia tri ban dau cua left va right
	while (l < r){
		int mid = (l+r)/2; // cong thuc tinh mid(phan tu o giua mang)
		if (a[mid] < x){ //neu phan tu mid < x thi ta cap nhat left = mid tang 1 don vi (mid +1)
			l = mid + 1;
		}
		else{ //nguoc lai neu phan tu mid > x thi ta cap nhat right = mid
			r = mid;
		}
	}
	if (a[l] == x){ //kiểm tra a[l] nếu a[l] bằng x thì đưa ra l, ngược lại đưa ra -1 
		return l;
	}
	return -1;
}

