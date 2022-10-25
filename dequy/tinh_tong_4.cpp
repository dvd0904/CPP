#include<bits/stdc++.h>
using namespace std;
int rec(int n){
    if(n == 1) return -1;
    else return n * pow(-1, n) + rec(n - 1);
}
int main(){
    int n; cin >> n;
    cout << rec(n);
}