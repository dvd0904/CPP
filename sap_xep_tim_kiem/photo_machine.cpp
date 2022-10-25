#include<bits/stdc++.h>
using namespace std;
bool check(long long mid, long long x, long long y, long long t){
    long long cnt = 0;
    cnt += mid / x;
    cnt += mid / y;
    return cnt >= t;
}
int main(){
    long long n, x, y; cin >> n >> x >> y;
    int Min = min(x, y);
    long long l = 0, r = min(x, y) * n;
    long long res = 0;
    while(l <= r){
        long long mid = (l + r) / 2;
        // tim gia tri nho nhat cua cnt
        // n - 1 vi luon phai in 1 cai tu ban goc truoc roi moi in duoc = 2 may
        if(check(mid, x, y, n - 1)){
            res = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    cout << res + Min;
}