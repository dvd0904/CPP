// sap xep chen O(n^2)
#include<bits/stdc++.h>
using namespace std; 
void insertsionSort(int a[], int n){
    for(int i = 1; i < n; i++){
        int x = a[i], index_in_front_of_x = i - 1;
        while(index_in_front_of_x >= 0 && x < a[index_in_front_of_x]){
            a[index_in_front_of_x + 1] = a[index_in_front_of_x];  // đẩy giá trị trước x lên vị trí
            index_in_front_of_x--; // lùi index để tìm xem còn giá trị nào > x nưa không
        } 
        a[index_in_front_of_x + 1] = x; // sau khi tìm được thì chèn x vào 
    }
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    insertsionSort(a, n);
    for(int x : a) cout << x << " ";
}