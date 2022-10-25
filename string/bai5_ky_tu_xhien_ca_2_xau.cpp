#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1, s2; cin >> s1 >> s2;
    set < char > S1, S2;
    map < char, int > M;
    for(char x : s1) S1.insert(x);
    for(char x : s2) S2.insert(x);
    for(char x : S1){
        M[x]++;
    }
    for(char x : S2){
        M[x]++;
    }
    for(auto x : M){
        if(x.second > 1) cout << x.first;
    }
    cout << endl;
    for(auto x : M){
        cout << x.first;
    }

}