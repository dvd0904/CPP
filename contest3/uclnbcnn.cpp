#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b){
	if(b==0) return a;
	else return gcd(b,a%b);
}
long long lcm(long long a, long long b){
	long long temp = a/gcd(a,b);
	return temp*b;
}
int main(){
	long long a,b;
	cin>>a>>b;
	cout<<gcd(a,b)<<" "<<lcm(a,b);
	return 0;
}

