#include<bits/stdc++.h>

using namespace std;

int main(){
	long long n,money,chai1,chai2;
	int a,b;
	cin>>n>>a>>b;
	if(n%2==0){
		if(n*a<(n/2)*b) cout<<n*a;
		else cout<<(n/2)*b;
	}else{
		if(n*a<((n/2)*b+ (n%2)*a)) cout<<n*a;
		else cout<<(n/2)*b+ (n%2)*a;
	}
	return 0;
}

