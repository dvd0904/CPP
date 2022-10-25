/*1 ma trận cỡ NxN có (N + 1) / 2 vòng
ví dụ: 1 2 3
       8 9 4
       7 6 5
    Xét bước 1: 1 2 3
    xét bước 2: 4 5
    xét bước 3: 6 7
    xét bước 4: 8
    các vòng ở trong tương tự
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[101][101], d = 1;
    for(int vong  = 0; vong < (n + 1) / 2; vong ++){
        // xét từng vòng, bước
        for(int j = vong; j < n - vong; j++) a[vong][j] = d++;
        for(int i = vong + 1; i < n - vong; i++) a[i][n - vong - 1] = d++;
        for(int k = n - 2 - vong; k >= vong; k--) a[n - 1 - vong][k] = d++;
        for(int l = n - 2 - vong; l > vong; l--) a[l][vong] = d++;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}