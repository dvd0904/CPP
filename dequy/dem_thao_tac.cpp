// mỗi 1 nút đều tìm đường ngắn nhất ở nút đó đến đích là 1
#include<bits/stdc++.h>
using namespace std;
int rec(int n){
    int s1 = 1e9, s2 = 1e9, s3 = 1e9;
    if(n == 1) return 0;
    s1 = 1 + rec(n - 1);
    if(n % 2 == 0) s2 = 1 + rec(n / 2);
    if(n % 3 == 0) s3 = 1 + rec(n / 3);
    return min(s1, min(s2, s3));
}
int main(){
    int n; cin >> n;
    cout << rec(n);
}