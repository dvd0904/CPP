#include<bits/stdc++.h>

using namespace std;
void isPrime(long long n){
    int cnt=0;
    for(long long i=2;i<=sqrt(n);i++){
        if(n%i==0) cnt++;
    }
    if(cnt==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	isPrime(n);
	}
    return 0;
}

