#include<bits/stdc++.h>
using namespace std;
int main(){
    map < int, int > M;
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a){
        cin >> x;
        M[x]++;
    }
    long long res = 0;
    for(int i = 0; i < n; i++){
        res += M[k - a[i]];
        if(a[i] * 2 == k) res--;
    }
    cout << res / 2;
}