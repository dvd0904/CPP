#include<bits/stdc++.h>
using namespace std;
// bigO(O(n^2))
void selection_Sort(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        int min = i;
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[min]) min = j;  // neu muon sap xep giam dan thi doi < thanh >
        }
        swap(a[min], a[i]);
    }
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    selection_Sort(a, n);
    for(int x : a) cout << x << " ";
    return 0;
}