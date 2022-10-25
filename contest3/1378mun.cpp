#include<bits/stdc++.h>
using namespace std;
long long Pow(int a, long long n){
    if (n == 0)
        return 1;
    long long temp = Pow(a, n/2);
    if (n%2 == 0)
        return (temp*temp)%10;
    else
        return (a*temp*temp)%10;
}
int main(){
	long long n;
	cin>>n;
	cout<<Pow(1378,n);
	return 0;
}

