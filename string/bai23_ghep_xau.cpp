#include<bits/stdc++.h>
using namespace std;
bool cmp(string a, string b){
    string ab = a + b;
    string ba = b + a;
    // cout << "comparing " << ab << " and " << ba << endl;
    // for(string x : V) cout << x << " ";
    // cout << endl;
    return ab > ba;
}
int main(){
    int t; cin >> t;
    vector < string > V;
    while(t--){
        string s; cin >> s;
        V.push_back(s);
    }
    sort(V.begin(), V.end(), cmp);
    for(string x : V) cout << x;
}