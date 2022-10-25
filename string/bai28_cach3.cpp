#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool cmp(string a, string b){
    if(a.size() != b.size()) return a.size() > b.size();
    else return a > b;
}


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    s += "@";
    vector<string> num;
    string tmp = "";
    for(char x : s){
        if(isdigit(x)){
            tmp += x;
        }
        else{
            while(tmp.size() > 1 && tmp[0] == '0') tmp.erase(0, 1);
            //while(tmp[0] == '0' && tmp.size() > 1) tmp.erase(0, 1); 
            //khong duoc lam the nay vi neu tmp = "" thi ko truy cap duoc
            if(tmp != "")
                num.push_back(tmp);
            tmp = "";
        }
    }
    sort(begin(num), end(num), cmp);
    cout << num[0] << endl;
}
