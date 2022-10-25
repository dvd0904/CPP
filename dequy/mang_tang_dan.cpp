#include<bits/stdc++.h>
using namespace std;
int rec(int A[], int n, int l){
    if(l == n - 1) return 1;
    if(A[l] <= A[l - 1]) return 0;
    else return rec(A, n, l + 1);
}
int main(){
    int n; cin >> n; int A[n];
    for(int &x : A) cin >> x;
    if(rec(A, n, 1)) cout << "YES";
    else cout << "NO";
}