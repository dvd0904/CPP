#include<bits/stdc++.h>
using namespace std;
int rec(long long n){
    if(n < 10) return n;
    else return rec(n / 10);
}
int main(){
    long long n; cin >> n;
    cout << rec(n);
}