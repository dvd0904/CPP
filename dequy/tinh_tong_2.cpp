#include<bits/stdc++.h>
using namespace std;
long long rec(int n){
    if(n == 1) return 1;
    else return pow(n,2) + rec(n-1);
}
int main(){
    int n; cin >> n;
    cout << rec(n);
}