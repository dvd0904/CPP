#include<bits/stdc++.h>
using namespace std;

int main(){
    stack < char > St;
    string s; cin >> s;
    for(char x : s){
        if(x == '(') St.push(x);
        else{
            if(St.empty()){
                cout << "NO\n";
                return 0;
            }
            St.pop();   
        }
    }
    if(St.empty()) cout << "Hop le\n";
    else cout << "NO\n";
}