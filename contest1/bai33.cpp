#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a , b, c , n;
    cin >> a >> b >> c >> n;
    long long x = max(max(a,b),c);
    long long m = x * 3 - a - b - c;
    n = n-m;
    if (n < 0){
        cout << "NO";
        return 0;
    }
    if (n % 3 == 0)cout << "YES";
    else cout <<"NO";
}
