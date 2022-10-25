// tìm vị trí đầu tiên > x
#include<bits/stdc++.h>
using namespace std;
int solve(int a[], int n, int x){
    int res = -1, l = 0, r = n - 1;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] > x){
            res = m;
            r = m - 1;
        }
        else{
            l = m + 1;
        }
    }
    return res;
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);
    int x; cin >> x;
    cout << solve(a, n, x);
}