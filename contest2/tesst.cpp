#include<bits/stdc++.h>
using namespace std;

void solve(int m, int n){
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            if(i == 1 || j == 1 || i == m || j == n) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}

int main(){
    int m, n;
    cin >> m >> n;
    solve(m, n);
}