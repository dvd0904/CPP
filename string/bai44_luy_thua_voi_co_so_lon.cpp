#include<bits/stdc++.h>
using namespace std;
long long const mod = 1e9 + 7;
long long du(string a, long long b){
    long long _mod = 0;
    for(int i = 0; i < a.length(); i++){
        _mod = (_mod * 10 + (a[i] - '0')) % b;
    }
    return _mod;
}
long long powMod(string n, long long m){
    long long res = 1;
    long long temp = du(n, mod);
    while(m){
        if(m & 1){
            res *= temp;
            res %= mod;
        }
        temp *= temp;
        temp %= mod;
        m >>= 1;
    }
    return res;
}
int main(){
    string n; long long m; cin >> n >> m;
    cout << powMod(n, m);
}