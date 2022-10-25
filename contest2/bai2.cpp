#include<bits/stdc++.h>

using namespace std;

int demUoc(long long n){
	long long dem=0;
	for(long long i=1;i<=n;i++){
		if(n%i==0) dem++;
	}
	return dem;
}
void uoc(long long n){
	for(long long i=1;i<=n;i++){
		if(n%i==0) cout<<i<<" ";
	}
}
int main(){
	long long n;
	cin>>n;
	cout<<demUoc(n)<<endl;
	uoc(n);
	return 0;
}

