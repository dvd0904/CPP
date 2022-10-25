#include<bits/stdc++.h>
using namespace std;
int thuanNghich(long long n){
	long long temp=n,rev=0;
	while(n){
		rev = rev*10 +n%10;
		n/=10;
	}
	if(rev==temp) return 1;
	return 0;
}
int Solve(long long n){
	long long tn=0, firstNum=n/10;
	int lastNum=n%10;
	while(firstNum>=10){
		tn=tn*10+firstNum%10;
		firstNum/=10;
	}
	if(thuanNghich(tn) && (lastNum== 2*firstNum || firstNum==2*lastNum)) return 1;
	return 0;
}
int main(){
	long long n;
	cin>>n;
	if(Solve(n)) cout<<"YES";
	else cout<<"NO";
	return 0;
}

