#include<bits/stdc++.h>
using namespace std;
int isPrime(long long n){
	for(int i=2;i<sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int perfectNum(long long n){
	for(int i=2;i<=32;i++){
		if(isPrime(i)){
			long long temp=pow(2,i)-1;
			if(isPrime(temp)){
				long long res = temp*pow(2,i-1);
				if(res==n) return 1;
			}
		}
	}
	return 0;
}
int main(){
	long long n; cin>>n;
	if(perfectNum(n)) cout<<"YES";
	else cout<<"NO";
	return 0;
}

