#include<bits/stdc++.h>
using namespace std;
vector < long long > V;
int main(){
    queue < long long > Q;
    Q.push(8);
    while(!Q.empty()){
        long long a = Q.front();
        Q.pop();
        if(a > 1e18) break;
        V.push_back(a);
        Q.push(a * 10); 
        Q.push(a * 10 + 8);
    }
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        for(long long x : V){
            if(x % n == 0){
                cout << x << endl;
                break;
            }
        }
    }
}