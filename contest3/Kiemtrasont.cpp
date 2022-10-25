#include<bits/stdc++.h>

using namespace std;
void isPrime(long long n){
	int cnt=0;
	if(n<2){
		cout<<"NO";
	}else{
		for(long long i=2;i<=sqrt(n);i++){
			if(n%i==0) cnt++;
		}
		if(cnt==0) cout<<"YES";
		else cout<<"NO";
	}
}
int main(){
	long long n;
	cin>>n;
	isPrime(n);
	return 0;
}

