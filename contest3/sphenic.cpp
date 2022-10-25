#include<bits/stdc++.h>
using namespace std;
int pt(long long n){
	int dem=0;
	for(long long i=2;i<=sqrt(n);i++){
		int cnt=0;
		while(n%i==0){
			++cnt;
			n/=i;
		}
		if(cnt>1) return 0;
		if(cnt==1) dem++;  // phai co dieu kien cnt==1 de bien dem khong tang khi i khong phai la so nguyen to
	}
	if(n!=1) dem++;
//	if(dem>3) return 0;
//	return 1;
	return dem==3;
}
int main(){
	int n; cin>>n;
	if(pt(n)) cout<<1;
	else cout<<0;
	return 0;
}

