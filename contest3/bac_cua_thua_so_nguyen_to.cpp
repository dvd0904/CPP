/* cach 1: tim boi cua p trong cac so tu 1 den n (vi n! = 1.2.3...n)
tinh xem trong moi~ boi cua p thi so p xuat hien bao nhieu lan
vi du: 10=1.2.3.4.5.6.7.8.9.10
o day co 3 so la boi cua p =3 la 3,6,9
3 xuat hien 1 lan, 6 xuat hien 1 lan, 9 xuat hien 2 lan => 10! chia het cho 3^4
cach 2 nhanh hon: dung cong thuc legendre
*/
/* cach 1:
int pt1(long long n, int p){
	int cnt=0;
	for(long long i=p;i<=n;i+=p){
		long long temp=i;
		while(temp%p==0){   // khong duoc dung i%p boi vi khi den statement i/=p thi gia tri cua i se bi thay doi
			cnt++;
			temp/=p;
		}
	}
	return cnt;
}
*/
#include<bits/stdc++.h>
using namespace std;
long long pt(long long n, long long p){
	long long cnt=0;
	for(long long i=p;i<=n;i*=p){
		cnt+=n/i;
	}
	return cnt;
}

int main(){
	long long n,p; cin>>n>>p;
	cout<<pt(n,p);
	
	return 0;
}

