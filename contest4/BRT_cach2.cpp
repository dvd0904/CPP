#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    int res = 2e9 + 1, dem = 0;
    for(int i = 0; i < n; i++){
        if(a[i] - a[i - 1] < res){
            res = a[i] - a[i - 1];
            dem = 1;
        }
        else if(a[i] - a[i - 1] == res) dem++;
    }
    cout << res << " " << dem;
}