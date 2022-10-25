#include<bits/stdc++.h>
using namespace std;
long long fib[100];
int fibo(long long n){
	fib[0] = 0; fib[1] = 1;
	for(int i=2 ;i <= 92; i++){
		fib[i] = fib[i-1] + fib[i-2];
	}
	for(int i=0 ;i <= 92; i++){
		if(fib[i] == n) return 1;
	}
	return 0;
	
}
int main(){
	int n; cin>>n;
	long long a[n];
	int cnt=0;
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	for(int i = 0; i < n; i++){
		if(fibo(a[i])){
			cout<<a[i]<<" ";
			cnt++;
		}
	}
	if(cnt==0) cout<<"NONE";

	return 0;
}

