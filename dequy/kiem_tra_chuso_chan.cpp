#include<bits/stdc++.h>
using namespace std;
int check(long long n){
    if(n == 0) return 1;
    int x = n % 10;
    if(x % 2 != 0) return 0;
    else return check(n / 10);
}
int main(){
    long long n; cin >> n;
    if(check(n)) cout << "YES";
    else cout << "NO";
}