#include<bits/stdc++.h>
using namespace std;
long long const mod = 1e9+7;
long long powMod(long long a, long long b, long long m){
	long long res=1;
	a%=m;
 	while(b){
 		if(b&1){	
 			res*=a;
 			res%=m;
		}
		a*=a;
		a%=m;
		b>>=1;
	}
	return res;
}

void inverse(long long a, long long m){
	cout<<powMod(a,m-2,m);
}
int main(){
	long long a; cin>>a;
	inverse(a,mod);
	return 0;
}

