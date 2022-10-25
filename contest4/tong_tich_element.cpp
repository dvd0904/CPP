#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int main(){
	int n; cin>>n;
	int a[n];
	long long mul = 1, sum =0;
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	for(int i = 0; i < n; i++){
		sum += a[i];
		sum %= mod;
		mul *= a[i];
		mul %= mod;
	}
	cout<<sum<<endl<<mul;
	return 0;
}

