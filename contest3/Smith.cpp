#include<bits/stdc++.h>
using namespace std;
int isPrime(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int tongCS(int n){
	int sum=0;
	while(n>0){
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int pt(int n){
	int sum=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){ 
			while(n%i==0){
				n/=i;
				sum+=tongCS(i);
			}
		}
	}
	if(n!=1) sum+=tongCS(n);
	
	return sum;
}
int main(){
	int n; cin>>n;
	if((tongCS(n) == pt(n)) && !isPrime(n)) cout<<"YES";
	else cout<<"NO";
//	cout<<isPrime(n);
	return 0;
}

