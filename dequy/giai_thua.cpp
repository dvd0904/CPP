#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;
int rec(int n){
    if(n == 1) return 1;
    else return (n % mod  * rec(n - 1) % mod) % mod;
}
int main(){
    int n; cin >> n;
    cout << rec(n);
}