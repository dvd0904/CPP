#include<bits/stdc++.h>
using namespace std;
void nguoc(long long n){
    if(n == 0) return;
    cout << n % 10 << " ";
    nguoc(n / 10);
}
void xuoi(long long n){
    if(n == 0) return;
    xuoi(n / 10);
    cout << n % 10 << " ";
}
int main(){
    long long n; cin >> n;
    xuoi(n);
    cout << endl;
    nguoc(n);
}
