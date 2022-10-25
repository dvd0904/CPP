#include<bits/stdc++.h>
using namespace std;

int A[100][100], Queen[100], cot[100], dCX[100], dCN[100], res = 0;
void init(){
    for(int i = 1; i <= 8; i++){
        for(int j = 1; j <= 8; j++) cin >> A[i][j];
    }
}

void Try(int i){
    for(int j = 1; j <= 8; j++){
        if(!cot[j] && !dCX[i + j - 1] && !dCN[i - j + 8]){
            Queen[i] = A[i][j];
            cot[j] = dCX[i + j - 1] = dCN[i - j + 8] = 1;
            if(i == 8){
               int sum = 0;
               for(int i = 1; i <= 8; i++){
                   sum += Queen[i];
               }
               res = max(res, sum);
            }
            else Try(i + 1);
            cot[j] = dCX[i + j - 1] = dCN[i - j + 8] = 0;
        }
    }
}

int main(){
    init();
    Try(1);
    cout << res;
}