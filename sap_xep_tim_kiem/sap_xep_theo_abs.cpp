#include<bits/stdc++.h>
using namespace std;
bool cmp(pair < int, int > a, pair < int, int > b){
    if(abs(a.first) != abs(b.first)) return abs(a.first) < abs(b.first);
    else return a.second < b.second;
}
int main(){
    int n; cin >> n;
    pair < int, int > a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i++) cout << a[i].first << " ";
}
