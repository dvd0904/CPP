/*
1 2 3
8 9 4
7 6 5
dong tren cung: 1 2 3 <=> h1
dong duoi: 6 7: h2
cot ben trai: 8 : c1
cot ben phai: 4 5 : c2
*/
#include<bits/stdc++.h>
using namespace std; 
int main(){
    int n; cin >> n;
    int a[101][101];
    int h1 = 0, h2 =  n - 1, c1 = 0, c2 = n - 1, cnt = 1;
    while(h1 <= h2 && c1 <= c2){
        // xay dung dong tren cung
        for(int i = c1; i <= c2; i++){
            a[h1][i] = cnt; cnt++;
        }
        h1++;
        // xay dung canh ben phai
        for(int i = h1; i <= h2; i++){
            a[i][c2] = cnt; cnt++;
        }
        c2--;
        // xay dung hang duoi cung
        if(c1 <= c2){
            for(int i = c2; i>= c1; i--){
                a[h2][i] = cnt; cnt++;
            }
            h2--;
        }
        if(h1 <= h2){
            for(int i = h2; i >= h1; i--){
                a[i][c1] = cnt; cnt++;
            }
            c1++;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}