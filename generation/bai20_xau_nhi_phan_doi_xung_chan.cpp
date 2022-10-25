#include<bits/stdc++.h>
using namespace std;

int n, ok, a[100];

void init(int l){
    for(int i = 1; i <= l; i++) a[i] = 0;
}

void next(int l){
    int i = l;
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        i--;
    }
    if(i == 0) ok = 0;
    else a[i] = 1;
}

bool check(int len){
    int l = 1, r = len;
    while(l < r){
        if(a[l] != a[r]) return false;
        l++; r--;
    }
    return true;
}

int main(){
    cin >> n;
    vector < string > V;
    for(int l = 2; l <= n; l += 2){
        init(l);
        ok = 1;
        while(ok){
            string res = "";
            if(check(l)){
                for(int i = 1; i <= l; i++){
                    res += to_string(a[i]);
                }
                V.push_back(res);
            }
            next(l);
        }
    }
    sort(V.begin(), V.end());
    for(string x : V) cout << x << endl;
}