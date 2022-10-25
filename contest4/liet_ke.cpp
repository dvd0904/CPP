#include<bits/stdc++.h>
using namespace std;
int reverse(int n){
	int rev = 0, temp = n;
	while(n>0){
		rev = rev * 10 + n%10;
		n /= 10;	
	}
	if(rev == temp) return 1;
	return 0;
}
int isPrime(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}
int squareNum(int n){
	int a = sqrt(n);
	if( a * a == n) return 1;
	return 0;
}
int sumIsPrime(int n){
	int sum = 0;
	while(n > 0){
		sum += n % 10;
		n /= 10;
	}
	if(isPrime(sum)) return 1;
	return 0;
}
int main(){
	int n, cnt1 = 0, cnt2 =0, cnt3 =0, cnt4 = 0; cin>>n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	for(int i = 0; i < n; i++){
		if(reverse(a[i])) cnt2++;
		if(isPrime(a[i])) cnt1++;
		if(squareNum(a[i])) cnt3++;
		if(sumIsPrime(a[i])) cnt4++;
	}
	cout<<cnt1<<endl<<cnt2<<endl<<cnt3<<endl<<cnt4;
	return 0;
}

