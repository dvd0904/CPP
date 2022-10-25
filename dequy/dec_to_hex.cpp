#include<bits/stdc++.h>
using namespace std;
void decToHex(long long n){
    if(n == 0) return;
    long long x = n % 16;
    decToHex(n / 16);
    switch(x){
        case 10: cout << "A"; break;
        case 11: cout << "B"; break;
        case 12: cout << "C"; break;
        case 13: cout << "D"; break;
        case 14: cout << "E"; break;
        case 15: cout << "F"; break;
        default: 
            cout << x; break;
    }    
}
int main(){
    long long n; cin >> n;
    if(n == 0) cout << 0;
    else
        decToHex(n);
}