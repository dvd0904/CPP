/* using meet in middle algorithm 
c^2 = a^2 + b^2 , sap xep mang tang dan => c^2 se o cuoi, tu do chi can tim cac cap (b,c)
neu ko tim thay cap nao, giam vi tri cua c^2 xuong 
*/
#include<bits/stdc++.h>
using namespace std;
bool check(long long a[], int n){
	for(int i = n - 1; i >= 2; i--){ // duyet i > = 2 boi vi khi r chay xuong i = 2 thi se so sanhs i2 = i0 + i1 ?
		int l = 0, r = i - 1;
		while(l < r){
			if(a[l] + a[r] == a[i]) return true;
			
			(a[l] + a[r] > a[i]) ? --r : ++l;
		}
	}
	return false;
}
int main(){
	int n; cin >> n;
	long long a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		a[i] = 1ll * a[i] * a[i];
	}
	sort(a, a + n);
	check(a,n) ? cout << "YES" : cout << "NO";
	return 0;
}

