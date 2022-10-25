#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n];
    ll dp[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(i == 0) dp[i] = a[i];
        else dp[i] = dp[i - 1] + a[i];
    }
    int q; cin >> q;
    while(q--){
        int l, r; cin >> l >> r;
        --l; --r;
        //dp[r] - dp[l - 1]
        if(l == 0) cout << dp[r] << endl;
        else cout << dp[r] - dp[l - 1] << endl;
    }
}
