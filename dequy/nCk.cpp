#include<bits/stdc++.h>
using namespace std;
int Rec(int n, int k){
    if(k == 0 || k == n) return 1;
    if(k == 1) return n;
    return Rec(n - 1,k) + Rec(n - 1, k - 1);
}
int main(){
    int n, k; cin >> n >> k;
    cout << Rec(n, k);
}