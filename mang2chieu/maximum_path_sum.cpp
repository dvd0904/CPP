#include<bits/stdc++.h>
using namespace std; 
int n, m, a[101][101], res  = 0;
int current_sum = 0, last_sum = 0;
int maximum_sum(int i, int j){
    if(i == n - 1 && j == m - 1) return a[i][j];
    if(i < n - 1 && j < m - 1){
        current_sum = max(maximum_sum(i, j + 1), maximum_sum(i + 1, j));
        last_sum = a[i][j] + current_sum;
    }
    else if(i == n - 1) last_sum = a[i][j] + maximum_sum(i, j + 1);
    else last_sum = a[i][j] + maximum_sum(i + 1, j);
    return last_sum;

}
int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int res  = maximum_sum(0, 0);
    cout << res;
}