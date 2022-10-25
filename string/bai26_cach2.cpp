#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    int cnt = 1;
    int res = 1;
    char ans = s[0];
    s += "_";
    for(int i = 1; i < s.size(); i++){
        if(s[i] == s[i - 1]){
            ++cnt;
        }
        else{
            if(cnt > res){
                res = cnt;
                ans = s[i - 1];
            }
            else if(cnt == res){
                ans = max(ans, s[i - 1]);
            }
            cnt = 1;
        }
    }
    string kq = string(res, ans);
    cout << kq << endl;
}
