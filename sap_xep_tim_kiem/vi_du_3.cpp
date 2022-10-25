int firstPos(int a[], int n, int x){
	int res = -1;
	int left = 0, right = n - 1;
	while(left <= right){
		int mid = (left + right) / 2;
		if(a[mid] == x){
			res = mid;
			//tìm kiếm thêm ở bên trái của mid xem còn x nữa hay không
			right = mid - 1;
		}
		else if(a[mid] < x){
			left = mid + 1;
		}
		else right = mid - 1;
	}
	return res;
}

//--Tìm vị trí cuối cùng của x trong mảng đã sắp xếp

int lastPos(int a[], int n, int x){
	int res = -1;
	int left = 0, right = n - 1;
	while(left <= right){
		int mid = (left + right) / 2;
		if(a[mid] == x){
			res = mid;
			//tìm kiếm thêm ở bên phai của mid xem còn x nữa hay không
			left = mid + 1;
		}
		else if(a[mid] < x){
			left = mid + 1;
		}
		else right = mid - 1;
	}
	return res;
}
