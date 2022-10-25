#include<bits/stdc++.h>
using namespace std;

int solve(int N){
    set < int > used;
    queue <pair < int, int >> Q;
    Q.push({N, 0});// push N va step 0
    used.insert(N);
    while(!Q.empty()){
        auto it = Q.front(); Q.pop();
        int cur = it.first, step = it.second;
        if(cur == 1) return step;
        if(cur - 1 > 0 && used.count(cur - 1) == 0){
            used.insert(cur - 1);
            Q.push({cur - 1, step + 1});
        }
        for(int i = 2; i <= sqrt(cur); i++){
            if(cur % i == 0){
                int k = cur / i;
                if(used.count(k) == 0){
                    used.insert(k);
                    Q.push({k, step + 1});
                }
            }
        }
    } 
    return 0;
}

int main(){
    int t; cin >> t;
    while(t--){
        int N; cin >> N;
        cout << solve(N) << endl;
    }
}