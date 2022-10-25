#include<bits/stdc++.h>
using namespace std;
map < int, int > res;
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a){
        cin >> x;
        res[x]++;
    }
    sort(a, a + n);
    int Max = 0;
    for(auto x : res){
        if(x.second > Max) Max = x.second;
        
    }
    for(auto x : res){
        if(x.second == Max){
            cout << x.first << " " << x.second;
            break;
        }
    }
}