// vị trí đường chéo xuôi = i + j - 1, đường chéo ngược = i - j + n
// với i là hàng, j là cột
// cac quan hau ko an nhau => coi nhu moi quan hau dat o 1 hang => 1 <= Q <= N
#include<bits/stdc++.h>
using namespace std;
int N, Queen[100], cot[100], dCX[100], dCN[100], res = 0;

void Try(int i){
    for(int j = 1; j <= N; j++){
        if(!cot[j] && !dCX[i + j - 1] && !dCN[i - j + N]){
            Queen[i] = j;
            cot[j] = dCX[i + j - 1] = dCN[i - j + N] = 1;
            if(i == N) res++;
            else Try(i + 1);
            cot[j] = dCX[i + j - 1] = dCN[i - j + N] = 0;
        }
    }
}

int main(){
    cin >> N;
    Try(1);
    cout << res;

}

