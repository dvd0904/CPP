#include<bits/stdc++.h>
using namespace std;
bool check(long long a[], long long n, long long t, long long mid){
    long long cnt = 0;
    for(int i = 0; i < n; i++){
        cnt += mid / a[i];
    }
    return cnt >= t;
}
int main(){
    long long n, t; cin >> n >> t;
    long long a[n];
    for(long long &x : a) cin >> x;
    long long l = 0, r = *min_element(a, a + n) * t;
    // tim phan tu dau tien >= cnt
    long long res = 0;
    while(l <= r){
        long long mid = (l + r) / 2;
        if(check(a, n, t, mid)){
            res = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    cout << res;
}