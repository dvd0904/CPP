#include "bits/stdc++.h"
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i<n; ++i)
        cin >> a[i];
    sort(a,a+n);
    if(n-1 < a[n-1])
        cout << n;
    else
        cout << a[n-1] + 1;
}
