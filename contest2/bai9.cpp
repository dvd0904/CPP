#include<bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	double sum=0;
	cin >> n; 
	for (double i=1; i<=n; i++) {
		sum+=1/i;		
	}
	cout<<setprecision(3)<<fixed<<sum;
	return 0;
}
