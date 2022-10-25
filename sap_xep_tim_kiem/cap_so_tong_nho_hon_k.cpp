// tìm vị trí xuât hiện cuối cùng của phần tử nhỏ hơn x = k - a[i]
#include<bits/stdc++.h>
using namespace std;
int lastPos(int a[], int l, int r, int x){
    int res  = - 1;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] < x){
            res = m;
            l = m + 1;
        }
        else r = m - 1;
    }
    return res;
}
int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);
    long long cnt = 0;
    for(int i = 0 ; i < n; i++){
        int l = lastPos(a, i + 1, n - 1, k - a[i]);
        if(l != -1) cnt += l - i;
    }
    cout << cnt;
}