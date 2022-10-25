#include<bits/stdc++.h>
using namespace std;
bool cmp(pair < int, int > a, pair < int, int > b){
    return a.second < b.second;
}
int main(){
    int n; cin >> n;
    vector < pair < int, int > > a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end(), cmp);
    int cnt = 1, temp = a[0].second;
    for(int i = 1; i < n; i++){
        if(a[i].first >= temp){
            cnt++;
            temp = a[i].second;
        }
    }
    cout << cnt;
}