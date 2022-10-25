#include<bits/stdc++.h>
using namespace std;

int n, k, a[100], sum, check;

void Try(int cnt, int cur_sum){
    if(check) return;
    if(cnt == k){
        check = 1;
        return;
    }
    for(int i = 1; i <= n; i++){
        if(cur_sum == sum) Try(cnt + 1, 0);
        else{
            if(cur_sum > sum) return;
            Try(cnt, cur_sum + a[i]);
        }
    }
}
int main(){
    sum = 0;
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        sum += a[i];
    }
    if(sum % k) cout << 0;
    else{
        sum /= k;
        check = 0;
        Try(0, 0);
        cout << check;
    }
}
