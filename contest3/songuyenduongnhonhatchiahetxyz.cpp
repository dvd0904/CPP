#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b){
	if(b==0) return a;
	else return gcd(b,a%b);
}
long long lcm(long long a, long long b){
	return a*b/gcd(a,b);
}
long long Solve(int x, int y, int z, int n){
	long long a=(long long)pow(10,n-1);
	long long k=lcm(lcm(x,y),z);  
	long long res=(a+k-1)/k*k;
	if(res<(long long)pow(10,n)) return res;
	else return -1;
}
int main(){
	int x,y,z,n;
	cin>>x>>y>>z>>n;
	cout<<Solve(x,y,z,n);
	return 0;
}

