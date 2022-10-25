#include<bits/stdc++.h>
using namespace std;

int n, x;
vector < int > res;
vector < string > ans;
void Try(vector < int > &a, int pos, int cur_sum){
    if(cur_sum > x) return;
    if(cur_sum == x){
        string s = "{";
        for(int i = 0; i < res.size(); i++) s += to_string(res[i]) + " ";
        s.pop_back(); s += "}";
        ans.push_back(s);
    }
    else{
        for(int i = pos; i < n; i++){
            res.push_back(a[i]);
            Try(a, i, cur_sum + a[i]);
            res.pop_back();
        }
    }
}

int main(){
    cin >> n >> x;
    vector < int > a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    Try(a, 0, 0);
    if(ans.empty()) cout << -1;
    else{
        cout << ans.size() << endl;
        for(string x : ans) cout << x << endl;
    }
}