#include<bits/stdc++.h>
using namespace std;
int thuanNghich(int n){
	int tn=0,temp=n;
	while(n!=0){
		tn=tn*10+n%10;
		n/=10;
	}
	if(tn==temp) return 1;
	return 0;
}
int uocNT(int n){
	int cnt=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			cnt++;
			while(n%i==0) n/=i;
		}
	}
	if(n!=1) cnt++;
	if(cnt>=3) return 1;
	return 0;
}
int main(){
	int a,b,dem=0;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		if(thuanNghich(i) && uocNT(i)){
			dem++;
			cout<<i<<" ";
		}
	}
	if(dem==0) cout<<-1;
	return 0;
}

