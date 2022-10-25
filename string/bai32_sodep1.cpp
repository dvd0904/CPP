#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return n > 1;
}

bool check(string s){
    int sum = 0;
    for(char x : s){
        if(x != '2' && x != '3' && x != '5' && x != '7') return false;
        sum += x - '0';
    }
    return isPrime(sum);
}
int main(){
    string s; cin >> s;
    if(check(s)) cout << "YES";
    else cout << "NO";
}