#include<bits/stdc++.h>
using namespace std;
vector < long long > V;
int main(){
    queue < long long > Q;
    Q.push(1);
    V.push_back(1);
    while(!Q.empty()){
        long long a = Q.front();
        Q.pop();
        if(a > 1e17) break; 
        V.push_back(a * 10);
        V.push_back(a * 10 + 1);
        Q.push(a * 10);
        Q.push(a * 10 + 1);
    }
    int t; cin >> t;
    while(t--){
        int cnt = 0;
        long long n; cin >> n;
        for(long long x : V){
            if(x < n) cnt++;
            else break;
        }
        cout << cnt << endl;
    }
}