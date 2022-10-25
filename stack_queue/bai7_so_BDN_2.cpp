#include<bits/stdc++.h>
using namespace std;
int n;

int check(string s){
    long long mod = 0;
    for(int i = 0; i < s.length(); i++){
        mod = (mod * 10 + (s[i] - '0')) % n;
    }
    return mod == 0;
}

string findNum(){
    queue < string > Q;
    Q.push("1");
    string s;
    while(!Q.empty()){
        s = Q.front();
        Q.pop();
        if(check(s)) return s;
        Q.push(s + "0");
        Q.push(s + "1");
    }
    return "";
}
int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        cin >> n;
        cout << findNum() << endl;
    }
}