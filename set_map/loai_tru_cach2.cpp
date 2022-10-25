#include<bits/stdc++.h>
using namespace std;
set < int > res;
int main(){
    int N, M; cin >> N >> M;
    for(int i = 0; i < N; i++){
        int x; cin >> x;
        res.insert(x);
    }
    for(int i = 0; i < M; i++){
        int x; cin >> x;
        if(res.count(x)) res.erase(x);
    }
    for(int x : res) cout << x << " ";
}