#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int first_pos(int a[], int l, int r, int x){
    int res = -1;
    while(l <= r){
        int mid = (l + r)/2;
        if(a[mid] == x){
            res = mid;
            r = mid - 1;
        }
        else if(a[mid] < x){
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    return res;
}
int main() {
    int n, k; cin >> n >> k;
    int a[n];   
    for(int i = 0;  i < n; i++){
        cin >> a[i];
    }
    sort(a,  a + n);
    bool ok = 0;
    for(int i  = 0; i < n - 1; i++){
        int l = first_pos(a, i + 1, n - 1, a[i] + k);
        if(l != -1){
            ok = 1;
            break;
        }
    }
    if(ok){
        cout << "1" << endl;
    }
    else{
        cout << "-1" << endl;
    }
}