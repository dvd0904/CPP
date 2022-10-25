#include<bits/stdc++.h>
using namespace std;
void dec_to_bin(long long n){
    if(n == 0) return;
    dec_to_bin(n / 2);
    cout << n % 2;
}
int main(){
    long long n; cin >> n;
    if(n == 0) cout << 0;
    else
        dec_to_bin(n);
}   