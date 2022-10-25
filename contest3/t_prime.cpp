/* dung toan c2, vi du: n=a1^x1 + a2^x2 + ... an^xn
=> so uoc = x1+1 + x2+1 + ... + xn+1
o day: so uoc = 3 = 2 + 1 => n phai la so chinh phuong n = a^2 => so uoc = 2 + 1 
va n = a^2 thi a phai la so nguyen to de a chi co 2 uoc 
de bai cho n<=10^12 => chi can duyet so nguyen to den 10^6 roi in ra cac binh phuong cua no
*/
#include<bits/stdc++.h>
using namespace std;
long long Prime[1000000+1];
void sang(){
	for(long long i=0;i<=1000000;i++) Prime[i]=1;
	Prime[0] = Prime[1] = 0;
	for(long long i=2;i<=1000;i++){
		if(Prime[i]){
			for(long long j=i*i;j<=1000000;j+=i) Prime[j] =0;
		}
	}
}
int main(){
	sang();
	long long n,cnt=0;
	cin>>n;
	for(long long i=1;i<=sqrt(n);i++){
		if(Prime[i]) cnt++;
	}
	cout<<cnt;
	return 0;
}

