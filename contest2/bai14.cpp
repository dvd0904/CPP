#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	long long sum=0;
	for(int i=1;i<=n;i++){
		sum+=pow(i,3);
	}
	cout<<sum;
	return 0;
}

