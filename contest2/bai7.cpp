#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	long long sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		sum+=i*i;
	}
	cout<<sum;
	return 0;
}

