#include<bits/stdc++.h>
using namespace std;
int rec(int A[], int l, int r){
    if(l >= r) return 1;
    if(A[l] == A[r])
        return rec(A, l + 1, r - 1);
    return 0;
}
int main(){
    int n; cin >> n;
    int A[n];
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    if(rec(A, 0, n - 1)) cout << "YES";
    else cout << "NO";
}