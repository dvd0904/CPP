#include<bits/stdc++.h>
using namespace std;
void Solve(long long n){
	if(n%2==0){
		cout<<(long long)((n+2)*n/2/2 - n*n/2/2);	
	}else{
		cout<<(long long)((n+1)*(n/2)/2 - (n+1)*((n/2) +1)/2);
	}
}
int main(){
	long long n;
	cin>>n;
	Solve(n);
	return 0;
}

