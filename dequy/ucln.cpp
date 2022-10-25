#include<bits/stdc++.h>

using namespace std;
long long ucln(long long a, long long b){
	if(b == 0) return a;
	else return ucln(b, a % b);
}
int main(){
	long long a, b;
	cin >> a >> b;
	long long bcnn = a / ucln(a,b) *b;
	cout<< ucln(a, b) << " " << bcnn;

	return 0;
}


