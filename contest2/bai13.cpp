#include<bits/stdc++.h>

using namespace std;

int main(){
	long long n,sum=0;
	cin>>n;
	for(int i=1;i<=2*n-1;i=i+2)
		sum+=i;
	cout<<sum;
	return 0;
}

