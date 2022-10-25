#include<bits/stdc++.h>
using namespace std;
long long const mod = 1e9+7;
int main(){
	int t; cin>>t;
	long long uoc=1;
	long long p,a[t];
	for(int i=0;i<t;i++){
		cin>>p>>a[i];
	}
	for(int i=0;i<t;i++){
		uoc= uoc*(a[i]+1);
		uoc%=mod;
	}
	cout<<uoc;
	return 0;
}

