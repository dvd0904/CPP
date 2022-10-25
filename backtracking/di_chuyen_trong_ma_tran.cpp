#include<bits/stdc++.h>
using namespace std;

int M, N, A[100][100], B[100][100], cnt = 0;

void init(){
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++) cin >> A[i][j];
    }
}

void Try(int i, int j){
    if(i == M - 1 && j == N - 1){
        cnt++;
        return;
    }
    if(i + 1 < M && B[i + 1][j]){
        B[i + 1][j] = 0;
        Try(i + 1, j);
        B[i + 1][j] = 1;
    }
    if(j + 1 < N && B[i][j + 1]){
        B[i][j + 1] = 0;
        Try(i, j + 1);
        B[i][j + 1] = 1;
    }
}

int main(){
    cin >> M >> N;
    init();
    memset(B, 1, sizeof(B));
    Try(0, 0);
    cout << cnt;
}