#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    pair < int, int > a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i].first;
        a[i].second = i;
    }
    int b[n];
    sort(a, a + n);
    int j = 0;
    for(int i = 0; i < n; i++){
        while(j < n && a[j].first <= a[i].first) ++j;
        if(j < n) b[a[i].second] = a[j].first;
        else b[a[i].second] = -1;
    }
    for(int i = 0; i < n; i++){
        if(b[i] == -1) cout << "_";
        else cout << b[i] << " ";
    }
}