#include<bits/stdc++.h>
using namespace std; 
int firstPos(int a[], int n, int x){
    int res = -1, l = 0, r = n - 1;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] == x){
            res = m;
            r = m - 1;
        }
        else if(a[m] < x){
            l = m + 1;
        }
        else r = m - 1;
    }
    return res;
}
int lastPos(int a[], int n, int x){
    int res = - 1, l = 0, r = n - 1;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] == x){
            res = m;
            l = m + 1;
        }
        else if(a[m] < x){
            l = m + 1;
        }
        else r = m - 1;
    }
    return res;
}
int lower(int a[], int n, int x){
    int res = -1, l = 0, r = n - 1;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] >= x){
            res = m;
            r = m - 1;
        }
        else{
            l = m + 1;
        }
    }
    return res;
}
int upper(int a[], int n, int x){
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
    int n, x; cin >> n >> x;
    int a[n];
    for(int &x : a) cin >> x;
    int res1 = firstPos(a, n, x);
    int res2 = lastPos(a, n, x);
    int res3 = lower(a, n, x);
    int res4 = upper(a , n, x);
    cout << res1 << endl << res2 << endl << res3 << endl << res4 << endl;
    if(res1 == -1) cout << 0;
    else cout << res2 - res1 + 1 << endl;
}