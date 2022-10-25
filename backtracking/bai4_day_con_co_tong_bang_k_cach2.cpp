#include<bits/stdc++.h>
using namespace std;
int n, k, a[100], b[100];
void Try(int cnt, int pos, int sum){
    for(int i = pos; i <= n; i++){
       if(sum + a[i] <= k){
           b[cnt] = a[i];
           if(sum + a[i] == k){
               cout << "[";
               for(int j = 1; j < cnt; j++) cout << b[j] << " ";
               cout << b[cnt] << "]" << endl;
           }
           else{
               Try(cnt + 1, i + 1, sum + a[i]);
           }
       }
       else return;
    }
}

int main(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    Try(1, 1, 0);
}