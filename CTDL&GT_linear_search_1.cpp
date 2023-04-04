https://codelearn.io/learning/data-structure-and-algorithms/819552

int LinearSearch(int a[], int n, int x){
	for(int i=0; i<n; i++){ // tìm kiếm lần lượt từng phần tử từ đầu mảng
		if(a[i] == x){ // nếu tìm thấy thì xuất ra vị trí 
			return i;
		}
	}
	return -1; // nếu không tìm thấy thì giá trị đó không tồn tại
}
