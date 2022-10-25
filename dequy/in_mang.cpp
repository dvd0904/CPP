#include<bits/stdc++.h>
using namespace std;
void xuoi(int A[], int n, int l){
    if(l == n) return;
    cout << A[l] << " ";
    return xuoi(A, n, l + 1);
}
void nguoc(int A[], int n, int r){
    if(r == -1) return;
    cout << A[r] << " ";
    return nguoc(A, n, r - 1);
}
int main(){
    int n; cin >> n;
    int A[n];
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    xuoi(A, n, 0);
    cout << endl;
    nguoc(A, n, n - 1);
}