#include<bits/stdc++.h>
using namespace std;
// bigO(O(n^2))
void interchange_Sort(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]) swap(a[i], a[j]);
        }
    }
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    interchange_Sort(a, n);
    for(int x : a) cout << x << " ";
    return 0;
}