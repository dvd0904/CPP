#include<bits/stdc++.h>
using namespace std;
int solve(string s){
    int mod = 0;
    for(int i = 0; i < s.length(); i++){
        mod = (mod * 10 + (s[i] - '0')) % 4;
    }
    return mod;
}
int main(){
    string s; cin >> s;
    if(s.length() == 1 && s[0] == '0'){
        cout << "1"; return 0;
    }
    int d[4] = {6, 8, 4, 2};
    for(int i = 0; i < 4; i++){
        if(solve(s) == i){
            cout << d[i]; break;
        }
    }
}