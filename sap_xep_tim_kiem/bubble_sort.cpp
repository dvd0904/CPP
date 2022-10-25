#include<bits/stdc++.h>
using namespace std; 
void bubbleSort(int a[], int n){
    int cnt = 0;
    for(int i = 0; i < n - 1; i++){
        // sau 1 vong lap thi tim duoc thang max => j chi can duyet den n - i - 1
        // khong can xet thang cuoi cung vi no max roi
        for(int j = 0; j < n - i - 1; j++){
            if(a[j] > a[j + 1]){
                swap(a[j], a[j + 1]);
            }
        }
        cnt++;
        cout << "Buoc " << cnt << ": ";
        for(int k = 0; k < n; k++) cout << a[k] << " ";
        cout << endl;   
    }
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    bubbleSort(a, n);
    return 0;
}