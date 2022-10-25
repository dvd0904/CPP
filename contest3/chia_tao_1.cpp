#include<bits/stdc++.h>
using namespace std;
long long const mod=1e9+7;
long long powMod(long long a, long long b, long long m){
    long long res=1;
    a%=m;
    while(b){
        if(b&1){
            res*=a;
            res%=m;
        }
        a*=a;
        a%=m;
        b/=2;
    }
    return res;
}
long long inverse(long long a, long long m){
    return powMod(a, m-2, m);
}
long long StarsAndBars(int n, int k){
    long long res = 1;
    if (k > n - k)
           k = n - k;   

    for (int i = 0; i <k; ++i){
        res = (res%mod * (n-i) %mod) %mod;
        res = (res%mod * inverse(i+1,mod))%mod;
    }
    return res;
}
// stars and bars
int main( ){
    int n,m;
    cin>>n>>m;
    cout<<StarsAndBars(n-1,m-1);
    return 0;
}
