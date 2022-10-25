#include<bits/stdc++.h>
using namespace std;
long long const mod = 1e9+7;
long long powMod(long long n, long long k, long long m){
	long long res=0, temp =1;
	n%=m; 
 	while(k){
 		if(k&1){	
 			res += temp;
 			res %= m;
		}
		k>>=1;
		temp = temp * n;
		temp %= m;
	}
	return res;
}
int main(){
	long long n,k;
	cin>>n>>k;
	cout<<powMod(n,k,mod);
	return 0;
}

