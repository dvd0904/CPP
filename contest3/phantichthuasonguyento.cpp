#include<bits/stdc++.h>
using namespace std;
void pt(long long n){
	int cnt=0;
	for(long long i=2;i<=sqrt(n);i++){
		if(n%i==0){
			int cnt=0;
			while(n%i==0){
				++cnt;
				n/=i;
			}
			cout<<i<<"^"<<cnt;
			if(n!=1) cout<<" * ";
		}
	}
	if(n!=1) cout<<n<<"^"<<1;
}
int main(){
	long long n; cin>>n;
	pt(n);
	return 0;
}

