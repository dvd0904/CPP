#include<bits/stdc++.h>
using namespace std;
int main(){
    set < int > S;
    int N; cin >> N;
    for(int i = 0; i < N; i++){
        int x; cin >> x;
        S.insert(x);
    }
    cout << S.size();
}