#include<bits/stdc++.h>

using namespace std;

int scp(long long n){
	long long x=sqrt(n);
	if(x*x==n) return 1;
	else return 0;
}
long long tich(long long n){
	long long mul=1;
	for(long long i=1;i<sqrt(n);i++){
		if(n%i==0){
			mul*=i;
			mul*=(n/i);
		}
	}
	if(scp(n)==1) mul=mul*sqrt(n);
	return mul;
}
int main(){
	long long n;
	cin>>n;
	long long mul=tich(n);
	cout<<mul;
}
