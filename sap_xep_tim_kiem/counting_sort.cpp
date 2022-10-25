// sort() O(nlogn)
#include<bits/stdc++.h>
using namespace std; 
int cnt[10000000 + 1];  // or dung map
int main(){
    int n; cin >> n;
    int a[n], Max = INT_MIN;
    for(int &x : a){
        cin >> x;
        cnt[x]++;
        if(x > Max) Max = x;
    }
    for(int i = 0; i <= Max; i++){
        if(cnt[i] != 0){
            while(cnt[i]--) cout << i << " ";
        }
    }
}