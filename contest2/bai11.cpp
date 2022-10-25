#include<bits/stdc++.h>

using namespace std;

int main(){
	long long n,sum=0;
	cin>>n;
	for(long long i=1;i<=n;i++){
		if(i%2==0) sum+=i;
		else sum+=pow(-1,i)*i;
	}
	cout<<sum;
	return 0;
}

