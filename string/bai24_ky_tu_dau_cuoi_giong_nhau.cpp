/* 2 kí tự giống nhau sẽ tạo đc 1 xâu con thỏa mãn
=> n kí tự giống nhau tạo đc nC2 xâu thỏa mãn
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    map < char, int > M;
    for(char x : s) M[x]++;
    long long sum = s.size();
    for(auto x : M){
        sum += 1ll * x.second * (x.second - 1) / 2;
    }
    cout << sum;
}