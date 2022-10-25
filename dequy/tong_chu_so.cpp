#include<bits/stdc++.h>
using namespace std;
int Rec(long long n){
    if(n < 10) return n;
    else return n % 10 + Rec(n / 10);
}
int main(){
    long long n; cin >> n;
    cout << Rec(n);
}