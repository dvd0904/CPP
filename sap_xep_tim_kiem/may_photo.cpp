#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, x, y; cin >> n >> x >> y;
    int res = 0;
    if(x < y){
        n--; 
        res += x;
    }
    else{
        n--;
        res += y;
    }
    while((n / x + n / y) > n) n--;
    if(x < y) res += n / x;
    else res += n /y;
    cout << res;
}