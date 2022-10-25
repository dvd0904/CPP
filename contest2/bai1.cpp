#include<bits/stdc++.h>

using namespace std;

int scp(long long n){
	long long x=sqrt(n);
	if(x*x==n) return 1;
	else return 0;
}
long long sumdiv(long long n){
	long long sum=0;
	for(long long i=1;i<sqrt(n);i++){
		if(n%i==0){
			sum=sum+i;
			sum=sum+(n/i);
		}
	}
	if(scp(n)==1) sum=sum+sqrt(n);
	return sum;
}
int main(){
	long long n;
	cin>>n;
	long long sum=sumdiv(n);
	cout<<sum;
}

