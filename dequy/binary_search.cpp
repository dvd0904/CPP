#include<bits/stdc++.h>
using namespace std;
int rec(int A[], int n, int l, int x){
    if(l == n - 1) return 0;
    if(x == A[l]) return 1;
    else return rec(A, n, l + 1, x);
}
int main(){
    int n; cin >> n; int A[n];
    for(int &x : A) cin >> x;
    int x; cin >> x;
    cout << rec(A, n, 0, x);
}