#include<bits/stdc++.h>
using namespace std;
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

// int dx[4] = {-1, 0, 0, 1}; chung canh
// int dy[4] = {0, -1, 1, 0};

// int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1}; chung dinh
// int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

// int dx[8] = {-2, -2, -1, -1, +1, +1, +2, +2}; con ma~
// int dy[8] = {-1, +1, -2, +2, -2, +2, -1, +1};

int main(){
    int n, m; cin >> n >> m;
    int a[205][205];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            bool ok = true;
            for(int k = 0; k < 8; k++){
                int i1 = i + dx[k];
                int j1 = j + dy[k];
                if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m){
                    if(a[i1][j1] >= a[i][j]){
                        ok = false;
                        break;
                    }
                }
            }
            if(ok) cnt++;
        }
    }
    cout << cnt;
}