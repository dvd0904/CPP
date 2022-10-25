#include<bits/stdc++.h>
using namespace std;

int main(){
    queue < string > Q;
    Q.push("1");
    int k; cin >> k;
    while(k--){
        string s = Q.front();
        cout << s << " ";
        Q.pop();
        Q.push(s + "0");
        Q.push(s + "1");
    }
}