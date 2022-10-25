#include<bits/stdc++.h>
using namespace std;
int n;
void solve(int n){
    long long sz = pow(10, n);
    queue < long long > Q;
    vector < long long > V;
    Q.push(6);
    Q.push(8);
    while(!Q.empty()){
        long long a = Q.front(); Q.pop();
        if(a > sz) break;
        V.push_back(a);
        Q.push(a * 10 + 6);
        Q.push(a * 10 + 8);
    }
    sort(V.begin(), V.end(), greater<long long>());
    for(long long a : V) cout << a << " ";
}
int main(){
    
    int t; cin >> t;
    while(t--){
        cin >> n;
        solve(n);
        cout << endl;
    }
}