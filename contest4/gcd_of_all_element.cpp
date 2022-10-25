#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
	if(b == 0) return a;
	else return gcd(b, a%b);
}
int Solve(int arr[], int n){
	int res = arr[0];
	for(int i = 1; i < n; i++){
		res = gcd(arr[i], res);
		if(res == 1) return 1;
	}
	return res;
}
int main(){
	int n; cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	cout<<Solve(arr,n);
	return 0;
}

