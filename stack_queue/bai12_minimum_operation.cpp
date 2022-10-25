// 2 thao tac (a): s = s -1; (b): s = s * 2
#include<bits/stdc++.h>
using namespace std;

bool used[100001];

int solve(int s, int t){
    memset(used, false, sizeof(used));
    queue <pair < int, int >> Q;
    Q.push({s, 0});// push s va step 0
    used[s] = true;
    while(!Q.empty()){
        auto it = Q.front(); Q.pop();
        int cur = it.first, step = it.second;
        if(cur == t) return step;
        if(cur < 10000 && !used[cur * 2]){
            used[cur * 2] = true;
            Q.push({cur * 2, step + 1}); // cac so duoc sinh ra la con cua so sinh ra no
            // vi du: 3 sinh ra 6 va 4 => => step(6) = step(3) + 1 or step(4) = step(3) + 1
        } 
        if(cur - 1 > 0 && !used[cur - 1]){
            used[cur - 1] = true;
            Q.push({cur - 1, step + 1});
        }
    } 
    return 0;
}

int main(){
    int t; cin >> t;
    while(t--){
        int s, t; cin >> s >> t;
        cout << solve(s, t) << endl;
    }
}
