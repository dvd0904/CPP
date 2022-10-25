#include<bits/stdc++.h>
using namespace std;
int x, y, p;
void extended(int a, int b){
	if(b==0){
		x=1;
		y=0;
		p=a;
	}
	else{
		extended(b,a%b);
		int temp = x;
		x = y;
		y = temp - (a/b) * y;
	}
}
void inverse(int a, int m){
	extended(a,m);
	if(p!=1){
		cout<<"no solution";
	}else{
		x = (x%m + m) % m; // x may be negative, so x%m maybe negative => add m to make it positive
		cout<<x<<endl;
	}
}
// tinh a^b mod m
long long powMod(long long a, long long b, long long m){
	long long res=1;
	a%=m;
 	while(b){
 		if(b&1){	// bitwise operator kiem tra xem b co phai so le ko
 			res*=a;
 			res%=m;
		}
		a*=a;
		a%=m;
		b>>=1;
	}
	return res;
}
// voi m la so nguyen to
void inverse2(long long a, long long m){
	cout<<powMod(a,m-2,m);
}
int main(){
	int a,b;
	cin>>a>>b;
	inverse(a,b);  
	inverse2(a,b);
	return 0;
}

