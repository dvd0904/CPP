#include<bits/stdc++.h>

using namespace std;

int main(){
	long long n,sum=0;
	cin>>n;
	for(int i=2;i<=2*n;i=i+2)
		sum+=i;
	cout<<sum;
	return 0;
}

