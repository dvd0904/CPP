#include<bits/stdc++.h>
using namespace std;
int square(long long n){
	long long a=sqrt(n);
	if(a*a==n) return 1;
	return 0;
}
int main(){
	long long a,b;
	cin>>a>>b;
	for(long long i=sqrt(a);i<=sqrt(b);i++){
		if(square(i)) cout<<i*i<<" ";
	}
	return 0;
}

