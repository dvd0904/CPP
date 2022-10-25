#include<bits/stdc++.h>
using namespace std;
int cnt[1001], used[1001];
int main(){
	int n; cin >> n;
	int a[n];
	// 1
	for(int i = 0; i < n; i++){
		cin >> a[i];
		cnt[ a[i] ]++;
	}
	for(int i = 0; i < n; i++){
		if(used[ a[i] ] == 0){
			cout << a[i] << " " << cnt[ a[i] ] << endl;
			used[ a[i] ] = 1;
		}
	}
	cout << endl;
	// 2
	for(int i = 0; i <= 1000; i++){
		if(cnt[i]) cout << i << " " << cnt[i] << endl;
	}
	cout << endl;
	// 3 & 4
	int max_fre = 0, max_ele; // so xuat hien nhieu nhat 
	int min_fre = 1e9, min_ele; // so xuat hien it nhat
	for(int i = 0; i < n; i++){
		if(cnt[ a[i] ] > max_fre ||( cnt[ a[i] ] == max_fre && a[i] > max_ele )){
			max_fre = cnt[ a[i] ];
			max_ele = a[i];
		}
		if(cnt[ a[i] ] < min_fre ||( cnt[ a[i] ] == min_fre && a[i] < min_ele )){
			min_fre = cnt[ a[i] ];
			min_ele = a[i];
		}
	}
	cout << max_ele << endl << min_ele;
 	return 0;
}

