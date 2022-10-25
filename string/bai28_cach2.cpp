#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string s;
vector <string> v;
string fix(string s){
    while(s[0] == '0' && s.size() != 1) s.erase(s.begin());
    return s;
}
bool cmp(string a , string b){
    if (a.size() == b.size()) return a > b;
    return a.size() > b.size();
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> s;
    for (int i = 0 ; i < s.size() ; i++){
        if (!isdigit(s[i])) s[i] = ' ';
    }
    stringstream ss(s);
    string num;
    while(ss >> num){
        v.push_back(fix(num));
    }
    sort(v.begin(),v.end(),cmp);
    cout << v[0];
}
