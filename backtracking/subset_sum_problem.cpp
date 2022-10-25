#include<bits/stdc++.h>
using namespace std;
int n, a[100], sum, check;
void Try(int cnt, int cur_sum){
    if(check) return;
    if(cnt == 2){ 
        check = 1; 
        return;
    }
    for(int j = 1; j <= n; j++){
        if(cur_sum + a[j] == sum){
            cout << "goi Try tai " << cnt + 1 << " " << 0 << endl;
            Try(cnt + 1, 0);
        }
        else{
            if(cur_sum + a[j] < sum){
                cout << "goi Try tai " << cnt << " " << cur_sum << "+" << a[j] << endl;
                Try(cnt, cur_sum + a[j]);
            }
            else return;
        }
    }
}

int main(){
    sum = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        sum += a[i];
    }
    if(sum & 1) cout << 0;
    else{
        sum /= 2;
        check = 0;
        Try(0, 0);
        cout << check;
    }
}