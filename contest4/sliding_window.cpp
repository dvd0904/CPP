// tong cua 3 so tiep theo = tong cua 3 so truoc do - di so dau tien cua 3 so do + so dau tien cua 3 so moi
// vi du: 1 2 3 4: tong dau tien = 1 + 2 + 3 = 6, tong tiep theo = 6 -  1 + 4 = 9 = 2 + 3 + 4
#include<bits/stdc++.h>
using namespace std;
vector < int > a(1e7+1);
int main(){
	int n, k; cin >> n >> k;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	long long sum = 0;
	for(int i = 0; i < k; i++)
		sum += a[i];
	long long res = sum, index = 0;
	// i la chi so ket thuc cua cua so
	for(int i = k; i < n; i++){
		sum = sum - a[i - k] + a[i];
		if(sum > res){
			res = sum;
			index = i - k + 1;
		}
	}
	cout << res << endl;
	for(int j = 0; j < k; j++){
		cout << a[index + j] << " ";
	}
	return 0;
}

