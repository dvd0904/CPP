#include<bits/stdc++.h>
using namespace std;
int Even(long long n){
    if(n == 0) return 0;
    int x = n % 10;
    if(x % 2 != 0) return 0 + Even(n / 10);
    else return x + Even(n / 10);
}
int Odd(long long n){
    if (n == 0) return 0;
    int x = n % 10;
    if(x % 2 == 0) return 0 + Odd(n / 10);
    else return x + Odd(n / 10); 
}
int main(){
    long long n; cin >> n;
    cout << Even(n) << endl << Odd(n);
}