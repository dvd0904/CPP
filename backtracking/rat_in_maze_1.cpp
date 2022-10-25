#include<bits/stdc++.h>
using namespace std;
int n, A[100][100];
bool ok = 0;
void init(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j= 1; j <= n; j++){
            cin >> A[i][j];
        }
    }
}

void Try(int i, int j, string s){
    if(A[1][1] == 0 || A[n][n] == 0){
        ok = 0;
        return;
    }
    if(i == 1 && j == 1 && A[i][j] == 0){
        ok = 0;
        return;
    }
    if(i == n && j == n){
        ok = true;
        cout << s << " " << endl;
        return;
    }
    if(A[i + 1][j] && i <= n){
        Try(i + 1, j, s + "D");
    }
    if(A[i][j + 1] && j <= n){
        Try(i, j + 1, s + "R");
    }
}

int main(){
    ok = false;
    init();
    string s = "";
    Try(1, 1, s);
    if(ok == false) cout << -1;
}