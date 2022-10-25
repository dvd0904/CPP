#include<bits/stdc++.h>
using namespace std;

int main(){
    queue < int > Q;
    int t; cin >> t;
    int x; 
    while(t--){
        int n; cin >> n;
        if(n == 1) cout << Q.size() << endl;
        else if(n == 2){
            if(Q.empty()) cout << "YES\n";
            else cout << "NO\n";
        }
        else if(n == 3){
            cin >> x;
            Q.push(x);
        }
        else if(n == 4){
            if(!Q.empty()) Q.pop();
        }
        else if(n == 5){
            if(Q.empty()) cout << -1 << endl;
            else cout << Q.front() << endl;
        }
        else{
            if(Q.empty()) cout << -1 << endl;
            else cout << Q.back() << endl;
        } 
    }
}