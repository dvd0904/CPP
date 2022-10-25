#include<bits/stdc++.h>
using namespace std;
set < int > C, D, hop;
int main(){
    int N, M; cin >> N >> M;
    for(int i = 0; i < N; i++){
        int x; cin >> x;
        C.insert(x);
    }
    for(int i = 0; i < M; i++){
        int x; cin >> x;
        D.insert(x);
    }
    vector < int > giao;
    for(int x : C){
        hop.insert(x);
        if(D.count(x)) giao.push_back(x);
    }
    for(int x : D) hop.insert(x);
    for(int x : giao) cout << x << " ";
    cout << endl;
    for(int x : hop) cout << x << " ";
}