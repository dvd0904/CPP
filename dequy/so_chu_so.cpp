#include<bits/stdc++.h>
using namespace std;

int rec(long long n, int i){
    if(n < 10) return i;
    else
        return i + rec(n / 10, i);
}
int main(){
    long long n; cin >> n;
    cout << rec(n, 1);
}