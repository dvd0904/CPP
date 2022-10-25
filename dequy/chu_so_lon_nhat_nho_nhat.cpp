#include<bits/stdc++.h>
using namespace std;
int fmax(long long n){
    if(n < 10) return n;
    else return max(n % 10, 1ll * fmax(n / 10));
}
int fmin(long long n){
    if(n < 10) return n;
    else return min(n % 10, 1ll * fmin(n / 10));
}
int main(){
    long long n; cin >> n;
    cout << fmax(n) << " " << fmin(n);
}