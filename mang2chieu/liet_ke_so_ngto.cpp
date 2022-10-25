#include<bits/stdc++.h>
using namespace std;
bool check(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return n > 1;
}
int main(){
    int n, m; cin >> n >> m;
    int a[505][505];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(check(a[i][j])) cout << a[i][j] << " ";
        }
        cout << endl;
    }

}