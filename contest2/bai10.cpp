#include<bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	double sum=0;
	cin >> n; 
	for (double i=2; i<=2*n; i=i+2) {
		sum+=1/i;		
	}
	cout<<setprecision(5)<<fixed<<sum;
	return 0;
}
