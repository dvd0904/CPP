#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n; 
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n, greater<int>());
    int doCung = a[0]; // dat vien dau tien la lon nhat
    int cnt = 1;
    for(int i = 1; i < n; i++){
        if(doCung >= 1){
            cnt++;
            doCung = min(doCung - 1, a[i]);// docung - 1 neu vien dat tren a[0] co do cung = a[0]
        }
        else break;
    }
    cout << cnt;
    return 0;
}