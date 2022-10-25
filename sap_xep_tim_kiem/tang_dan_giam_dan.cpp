#include<bits/stdc++.h>
using namespace std;
int main(){
    int N; cin >> N;
    int A[N];
    for(int &x : A) cin >> x;
    sort(A, A + N);
    for(int x : A) cout << x << " ";
    cout << endl;
    sort(A, A + N, greater<int>());
    for(int x : A) cout << x << " ";
}