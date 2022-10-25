/* tim bac cua 2 va 5 trong n! roi lay so nho hon
vi du trong 6!, so 2 xuat hien 4 lan, so 5 xuat hien 1 lan => chi tao duoc min(1,4) lan so 10 = 1 so 10
ta thay rang so lan xuat hien cua 5 luon it hon so lan xuat hien cua 2 => chi can tinh so lan xuat hien cua so 5
*/
#include<bits/stdc++.h>
using namespace std;
long long const mod = 1000000007;
long long dem(long long n){
	long long cnt=0;
	for(long long i=5;i<=n;i*=5){
		cnt+=n/i;
		cnt%=mod;
	}
	return cnt%mod;
}
int main(){
	long long n; cin>>n;
	cout<<dem(n);
	return 0;
}

